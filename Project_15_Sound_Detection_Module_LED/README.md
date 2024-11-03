Day 15: Sound Detection Module Clap-Activated LED

Project Description:
For Day 15, I used a sound detection module to make a clap-activated LED. The module listens for sounds, and with a threshold set at 51, each clap toggles the LED—one clap turns it on, the next turns it off, and so on. It’s a simple sound-reactive project, perfect for a hands-free lighting experience.

🛠️ Components Used:  
Arduino Uno  
KY-037 Sound Detection Module  
LED  
Jumper Wires  
Breadboard  

⚙️ Circuit Setup:
The analog output of the sound module is connected to analog pin A0 on the Arduino for sound level detection.  
The module’s VCC and GND pins are connected to the Arduino’s 5V and GND, respectively.  
The LED is connected to a digital pin, with a resistor connecting it to GND.
