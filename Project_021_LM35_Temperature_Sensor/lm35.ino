#define ADC_VREF_mV    5000.0 
#define ADC_RESOLUTION 1024.0
#define PIN_LM35       A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcVal = analogRead(PIN_LM35);
  float milliVolt = adcVal * (ADC_VREF_mV / ADC_RESOLUTION);
  float tempC = milliVolt / 10;
  float tempF = tempC * 9 / 5 + 32;

  Serial.print("Temperature: ");
  Serial.print(tempC);   
  Serial.print("°C");
  Serial.print("  ~  "); 
  Serial.print(tempF);  
  Serial.println("°F");

  delay(500);
}
