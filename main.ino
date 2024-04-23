// main.ino

#include <Arduino.h>
#include "Sensor.h"

// Define the pin for the simulated analog sensor
const int SENSOR_PIN = A0;

// Create an instance of the Sensor class
Sensor sensor(SENSOR_PIN);

// Variables to store calibration points
float point1_value, point2_value;
int point1_reading, point2_reading;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Prompt user to place sensor at first point
  Serial.println("Please place the sensor at the first calibration point and enter the known value:");
  while (!Serial.available()); // Wait for user input
  point1_value = Serial.parseFloat(); // Read user input as a float
  
  // Read the analog sensor value at the first point
  point1_reading = sensor.readSensor();
  Serial.print("Calibration point 1 reading: ");
  Serial.println(point1_reading);
  
  // Prompt user to place sensor at second point
  Serial.println("Please place the sensor at the second calibration point and enter the known value:");
  while (!Serial.available()); // Wait for user input
  point2_value = Serial.parseFloat(); // Read user input as a float
  
  // Read the analog sensor value at the second point
  point2_reading = sensor.readSensor();
  Serial.print("Calibration point 2 reading: ");
  Serial.println(point2_reading);
  
  // Calibrate the sensor using the two points
  sensor.calibrate(point1_reading, point1_value, point2_reading, point2_value);
}

void loop() {
  // Print the current calibrated value every 5 seconds
  static unsigned long lastPrintTime = 0;
  if (millis() - lastPrintTime >= 5000) {
    float currentValue = sensor.getCurrentValue();
    Serial.print("Current calibrated value: ");
    Serial.println(currentValue);
    lastPrintTime = millis();
  }
  // Rest of the loop code
}
