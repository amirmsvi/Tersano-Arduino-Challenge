// Sensor.h

#ifndef SENSOR_H
#define SENSOR_H

#include <Arduino.h>

class Sensor {
  private:
    int pin;
    float slope, intercept;

  public:
    Sensor(int pin);
    int readSensor();
    void calibrate(int point1_reading, float point1_value, int point2_reading, float point2_value);
    float getCurrentValue();
};

#endif
