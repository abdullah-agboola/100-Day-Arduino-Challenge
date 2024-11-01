const int analogPin = A5;
const int LEDCount = 5;
int LEDPins [] = {2, 3, 4, 5, 6};

void setup() {
  for (int i = 0; i < LEDCount; i++) {
    pinMode(LEDPins[i], OUTPUT);
  }
}

void loop() {
  int sensorReading = analogRead(analogPin);
  int LEDLevel = map(sensorReading, 0, 1023, 0, LEDCount);

  for(int i = 0; i < LEDCount; i++) {
    if(i < LEDLevel){
      digitalWrite(LEDPins[i], HIGH);
    }
    else {
      digitalWrite(LEDPins[i], LOW);
    }
  }
}
