int LED = 13;
int analogPin = A0;
int threshold = 51;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int analogVal = analogRead(analogPin);
  Serial.println(analogVal);
  delay(100);

  if (analogVal > threshold) {
    digitalWrite(LED, !digitalRead(LED));  
    delay(300);                           
  }
}
