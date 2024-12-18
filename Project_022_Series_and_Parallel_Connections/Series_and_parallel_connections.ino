int seriesPin = 7;  
int parallelPin = 8;  

void setup() {
  pinMode(seriesPin, OUTPUT);
  pinMode(parallelPin, OUTPUT);
}

void loop() {
  digitalWrite(seriesPin, HIGH);
  delay(3000);  
  
  digitalWrite(seriesPin, LOW);
  delay(1000);
  
  digitalWrite(parallelPin, HIGH);
  delay(3000);
  
  digitalWrite(parallelPin, LOW);
  delay(1000);
}
