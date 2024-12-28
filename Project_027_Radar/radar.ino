#include <Servo.h>
int servoPin = 12;
Servo servo;
int angle = 0;
int trigPin = 10;    
int echoPin = 11;
int LED = 7;  
int buzzer = 13;
float duration_us, distance_cm;

void setup() {
  servo.attach(servoPin);
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  for(angle = 15; angle < 165; angle++){
    servo.write(angle);
    delay(10);
    checkDistance(); 
  }
  for(angle = 165; angle > 15; angle--){
    servo.write(angle);
    delay(10);
    checkDistance(); 
  }
}
  
void checkDistance() {
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration_us = pulseIn(echoPin, HIGH);
  distance_cm = duration_us * 0.017;

  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");
  
  if (distance_cm > 0 && distance_cm <= 20) {
    digitalWrite(LED, HIGH);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(LED, LOW);
    digitalWrite(buzzer, LOW);
  }
}