#include "application.h"
#include "ir-codes.h"
#include "ir-sensor.h"
#include "sonos-volume.h"
int IR_PIN = D3;

int new_volume = 30;

IrSensor* sensor_;
void setup() {
    Serial.begin(9600);
    sensor_ = new IrSensor(IR_PIN);
    new_volume = volume();
}

int last_time = 0;
bool first = false;
void loop() {
  if (sensor_->has_signal()) {
    IR_Command c = identify_command(
      sensor_->pulses(), sensor_->num_pulses());
    const Command *command = get_command(c);
    Serial.println(command->name);
    if (c == IR_Command::SAMSUNG_VOLUME_UP) {
        new_volume += 5;
        if (new_volume > 100) new_volume = 100;
    }
    if (c == IR_Command::SAMSUNG_VOLUME_DOWN) {
        new_volume -= 5;
        if (new_volume <= 0) new_volume = 0;
        Serial.print("Volume: ");
        Serial.print(new_volume, DEC);
    }
    Serial.print("Volume: ");
    Serial.print(new_volume, DEC);
    Serial.println();
    sensor_->reset();

  }
  if ((new_volume != volume()) && (millis() - last_time) > 1000) {
    set_volume(new_volume);
    last_time = millis();
  }

}
