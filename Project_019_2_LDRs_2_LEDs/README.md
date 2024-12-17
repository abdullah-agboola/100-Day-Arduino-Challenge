Day 19: Dual LDRs Controlling Dual LEDs

Project Description:  
For Day 19, I built a project where two LDRs (Light Dependent Resistors) independently control two LEDs. Each LDR detects the light level in its environment and triggers its corresponding LED to turn ON or OFF. This setup introduces basic light automation concepts for smart systems.

🛠️ Components Used:   
Arduino Uno  
Light Dependent Resistors (LDRs)  
LEDs (any color)  
Resistors (220Ω )
Breadboard   
Jumper Wires  

⚙️ Circuit Setup:  
Connect one terminal of each LDR to 5V and the other terminal to an analog pin and GND via a 10kΩ resistor (voltage divider setup).  
Connect each LED with a 220Ω resistor to digital pins and GND.  
LDR1: Analog Pin A0 → LED1: Digital Pin 
LDR2: Analog Pin A1 → LED2: Digital Pin 
