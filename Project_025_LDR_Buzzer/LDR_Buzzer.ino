int LDR = A2;
int buzzer = 11;
int LDRValue;

void setup() {
 Serial.begin(9600);
  pinMode(LDR, INPUT_PULLUP);
  pinMode(buzzer,  OUTPUT);  

}

void loop() {
  LDRValue = analogRead(LDR);

  if  (LDRValue <= 80) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer,  LOW);
  }

}
