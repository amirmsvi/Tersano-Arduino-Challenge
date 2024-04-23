# Sensor Calibration Simulator

This Arduino project simulates the calibration of a virtual sensor. It includes functions to simulate reading sensor values, adjusting calibration settings, and displaying the calibration status.

## Setup

### Requirements

- Arduino IDE or compatible software
- Arduino board (simulated in this project)

### Installation

1. Clone or download the repository to your local machine.
2. Open the `main.ino` file in Arduino IDE.
3. Connect your Arduino board to your computer via USB.
4. Upload the code to your Arduino board.
5. Open the serial monitor to interact with the program.

## Usage

1. Open the serial monitor in the Arduino IDE.
2. Follow the instructions to calibrate the sensor: Place the sensor at the first calibration point and enter the known value. Place the sensor at the second calibration point and enter the known value.
3. The program will calibrate the sensor using the provided calibration points.
4. The current calibrated value will be printed every 5 seconds in the serial monitor.

## File Structure

.
├── main.ino
├── README.md
└── src
	├── Sensor.h
	└── Sensor.cpp


- `main.ino`: Main Arduino sketch file.
- `README.md`: Documentation file.
- `src`: Folder containing the header and source files for the `Sensor` class.
  - `Sensor.h`: Header file for the `Sensor` class.
  - `Sensor.cpp`: Source file for the `Sensor` class.

## Contributing

This project is not open for contributions.

## License

This project is not licensed.
