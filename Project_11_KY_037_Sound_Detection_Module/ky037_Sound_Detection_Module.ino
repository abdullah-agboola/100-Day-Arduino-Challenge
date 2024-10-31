int digitalPin = 7;   
int analogPin = A0;   
int digitalVal;       
int analogVal;      

void setup()
{
  pinMode(digitalPin,INPUT); 
  pinMode(analogPin, INPUT);    
  Serial.begin(9600);
}

void loop()
{
  digitalVal = digitalRead(digitalPin); 
  analogVal = analogRead(analogPin);
  Serial.println(analogVal);
  delay(1000);  
}