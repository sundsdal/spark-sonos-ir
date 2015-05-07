#ifndef IR_SENSOR_H
#define IR_SENSOR_H


class IrSensor {
  private:
    static IrSensor* sensors_[5];
    static int num_sensors_;
    static void blink_interrupt_handler();

    int pin_;
    int pulses_[100];
    int num_pulses_;
    int last_state_;
    int last_time_;
    int reading_;
    void blink();

    IrSensor(const IrSensor&);
    void operator=(const IrSensor&);
  public:
    IrSensor(int pin);
    bool has_signal();
    void reset();
    const int* pulses();
    int num_pulses();

};

#endif
