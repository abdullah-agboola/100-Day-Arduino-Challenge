int ldrPin1 = A0; 
int LED1 = 13;   
int ldrPin2 = A5; 
int LED2 = 7;    

void setup() {
  Serial.begin(9600);  
  pinMode(LED1, OUTPUT); 
  pinMode(LED2, OUTPUT); 
}

void loop() {  
  int ldrValue1 = analogRead(ldrPin1);
  int ldrValue2 = analogRead(ldrPin2);
  
  if (ldrValue1 <= 80) { 
    digitalWrite(LED1, HIGH);
  } else {
    digitalWrite(LED1, LOW);
  }

    if (ldrValue2 <= 80) { 
    digitalWrite(LED2, HIGH);
  } else {
    digitalWrite(LED2, LOW);
  } 
  delay(100);
}
