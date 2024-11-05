int xPin = A0;         
int yPin = A1;         
int ledPins[] = {4, 5, 6, 7}; 

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT); 
  }
  Serial.begin(9600);
}

void loop() {
  int xValue = analogRead(xPin); 
  int yValue = analogRead(yPin); 

  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  // Top-right quadrant
  if (xValue > 512 && yValue < 512) {
    digitalWrite(ledPins[3], HIGH);
  }
  // Top-left quadrant
  else if (xValue < 512 && yValue < 512) {
    digitalWrite(ledPins[1], HIGH);
  }
  // Bottom-left quadrant
  else if (xValue < 512 && yValue > 512) {
    digitalWrite(ledPins[0], HIGH);
  }
  // Bottom-right quadrant
  else if (xValue > 512 && yValue > 512) {
    digitalWrite(ledPins[2], HIGH);
  }

  delay(100); 
}
