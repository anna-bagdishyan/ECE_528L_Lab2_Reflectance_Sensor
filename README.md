# ECE 528/L - Robotics and Embedded Systems with Lab
**CSU Northridge**

**Department of Electrical and Computer Engineering**

## Reflectance Sensor Lab
The Reflectance Sensor lab interfaces with the following:

* User LEDs of the TI MSP432 LaunchPad
* 8-Channel QTRX Sensor Array - [Product Link](https://www.pololu.com/product/3672)

## Overview
This lab introduces the 8-Channel QTRX Reflectance Sensor Array, which uses eight IR LED and phototransistor pairs to detect black lines on a white surface. A GPIO driver was written to initialize and read the sensor array through pins P7.0 to P7.7, producing an 8-bit value where each bit is 1 for black and 0 for white. The sensor readings were displayed in binary on the serial terminal and used to identify line maze situations such as center, slightly left or right, far left or right, left and right turns, T-intersections, and dead ends. Each situation is indicated by a different RGB LED color.

## Components Used
| Components Used | Quantity    | Manufacturer 
| -------------   | ----------- | -----------
| MSP432 Launchpad  | 1 | Texas Instruments
| USB-A to Micro-USB Cable  | 1 | N/A
| TI-RSLK MAX Chassis   | 1 | Pololu
| 8-Channel QTRX Sensor Array  | 1 | Pololu

## Analysis and Results  
### Procedure  
The Print_Binary procedure displays an 8-bit value in binary by shifting each bit to the right and masking it with 1. The result is printed one bit at a time. In the main file, the reflectance sensor was read, and the returned value was passed to Detect_Line_Position to determine the line position. The sensor reading was then displayed in the serial terminal using the Print_Binary function to allow for the observation of the sensor outputs. This was used to identify the robot's position relative to the line.  

### Task 1  
The Detect_Line_Position function was created to identify the line maze possibility based on the reflectance sensor reading. A switch statement was used to compare the sensor data with values for the center, slightly left, slightly right, far left, far right, left turn, right turn, T-intersection, and dead end positions. The red LED turns on for left and right turns, while the RGB LED displays a different color for each detected position. The function is called in the main loop after each sensor reading to update the LEDs based on the detected position.  

## Known Issues or Limitations  
There are no known current issues or limitations.  

## Author Contribution  
Anna  
- Wrote Task 1 in "Analysis and Results" on GitHub  
- Task 1

Mario  
- Wrote the Overview.
- Wrote the Print_Binary() function.
  
## References
ECE 528/L Lab 2 - Reflectance Sensor.
