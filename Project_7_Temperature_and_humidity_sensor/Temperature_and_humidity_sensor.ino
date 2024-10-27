#include <dht.h>        
#define outPin 8        

dht DHT;                

void setup() {
	Serial.begin(9600);
}

void loop() {
	int readData = DHT.read11(outPin);

	float t = DHT.temperature;        
	float h = DHT.humidity;           

	Serial.print("Temperature = ");
	Serial.print(t);
	Serial.print("°C | ");
	Serial.print("Humidity = ");
	Serial.print(h);
	Serial.println("% ");
	Serial.println("");

	delay(1000); 
}