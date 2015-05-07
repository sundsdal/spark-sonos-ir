#include "ir-sensor.h"
#include "application.h"

int IrSensor::num_sensors_ = 0;
IrSensor* IrSensor::sensors_[5];

void IrSensor::blink_interrupt_handler() {
    for (int i = 0; i < num_sensors_; i++) {
        sensors_[i]->blink();
    }

}

IrSensor::IrSensor(int pin)
      : pin_(pin), num_pulses_(0), last_state_(-1),
        last_time_(micros()), reading_(true) {
    if (num_sensors_ >= 5) return;
    pinMode(pin, INPUT);
    attachInterrupt(pin, blink_interrupt_handler, CHANGE);
    sensors_[num_sensors_++] = this;
}

bool IrSensor::has_signal() {
    if ((num_pulses_ > 15 && (micros() - last_time_) > 10000)) {reading_ = false;
        return true;
    } else {
        return false;
    }
}

const int* IrSensor::pulses() {
    return pulses_;
}

int IrSensor::num_pulses() {
    return num_pulses_;
}

void IrSensor::reset() {
    num_pulses_ = 0;
    reading_ = true;
}

void IrSensor::blink() {
    int state = digitalRead(pin_);
    if (state == last_state_) return;
    unsigned long now = micros();
    last_state_ = state;
    unsigned long diff = now - last_time_;
    last_time_ = now;
    if (reading_) {
      if (num_pulses_ == 0 && last_state_ == LOW)
      {
          return;
      }
      if (num_pulses_ >= 100) {
        reading_ = false;
        return;
       }
      pulses_[num_pulses_] = diff;
      num_pulses_++;
    }
}
