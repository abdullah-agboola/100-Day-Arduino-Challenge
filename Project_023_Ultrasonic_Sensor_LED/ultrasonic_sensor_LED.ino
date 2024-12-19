int trigPin = 9;    
int echoPin = 8;
int LED = 13;  

float duration_us, distance_cm;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration_us = pulseIn(echoPin, HIGH);
  distance_cm = 0.017 * duration_us;

  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  if(distance_cm <= 20) {
		digitalWrite(LED, HIGH);
	}
  else if (distance_cm >=20) {
		digitalWrite(LED, LOW);
	}  

  delay(500);
}
