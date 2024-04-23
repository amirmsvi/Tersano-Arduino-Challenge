// Sensor.cpp

#include "Sensor.h"

Sensor::Sensor(int pin) {
  this->pin = pin;
  pinMode(pin, INPUT);
}

int Sensor::readSensor() {
  return analogRead(pin);
}

void Sensor::calibrate(int point1_reading, float point1_value, int point2_reading, float point2_value) {
  slope = (point2_value - point1_value) / (point2_reading - point1_reading);
  intercept = point1_value - slope * point1_reading;
}

float Sensor::getCurrentValue() {
  int sensor_reading = readSensor();
  return slope * sensor_reading + intercept;
}
