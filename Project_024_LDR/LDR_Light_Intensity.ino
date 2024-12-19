int LDR = A2;
int LDRValue;

void setup() {
 Serial.begin(9600);
  pinMode(LDR, INPUT_PULLUP); 

}

void loop() {
  LDRValue = analogRead(LDR);

Serial.print("LDR Value: ");
Serial.print(LDRValue);
Serial.print('\n');

delay(500);

}
