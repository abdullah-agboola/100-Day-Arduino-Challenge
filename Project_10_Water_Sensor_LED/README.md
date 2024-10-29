Day 10: Water Sensor LED Indicator

Project Description: For Day 10, I created a water level indicator using a water sensor and an LED. The sensor reads the water level, displaying the data on the serial monitor. If the water level is 500 or above, the LED lights up.

🛠️ Components Used:  
Arduino Uno  
Water Sensor  
LED  
Resistors  
Jumper Wires  
Breadboard  

⚙️ Circuit Setup:  
The water sensor's VCC was connected to a digital pin on the Arduino, allowing it to be powered only when taking a reading every second. This method helps reduce corrosion by keeping the sensor on for just 10 milliseconds per reading.  
The sensor output was connected to an analog pin to measure water level.  
The LED was connected to another digital pin and lights up when the water level meets the threshold of 500 or above.  
A resistor was connected to the LED to limit current.
