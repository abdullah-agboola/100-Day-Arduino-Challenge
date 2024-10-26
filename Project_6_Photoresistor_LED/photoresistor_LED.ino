int ldrPin = A2;
int ledPin = 11;
int ldrValue;

void setup() {
 Serial.begin(9600);
  pinMode(ldrPin, INPUT_PULLUP);
  pinMode(ledPin,  OUTPUT);  

}

void loop() {
  ldrValue = analogRead(ldrPin);

  if  (ldrValue <= 80) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin,  LOW);
  }

}
