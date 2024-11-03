int xPin = A0;         
int yPin = A1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("X-axis: ");
  Serial.print(analogRead(xPin));
  Serial.print(" | ");
  Serial.print("Y-axis: ");
  Serial.print(analogRead(yPin));
  Serial.println(" | ");
  delay(100);
}
