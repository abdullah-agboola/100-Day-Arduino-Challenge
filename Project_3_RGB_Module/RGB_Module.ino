int PIN_RED = 3;
int PIN_GREEN = 5;
int PIN_BLUE = 6;

void setup() {
  }

void loop() {
  analogWrite(PIN_RED, 255);
  analogWrite(PIN_GREEN, 0);
  analogWrite(PIN_BLUE, 0);
  delay(1000);
  analogWrite(PIN_RED, 0);
  analogWrite(PIN_GREEN, 255);
  analogWrite(PIN_BLUE, 0);
  delay(1000);
  analogWrite(PIN_RED, 0);
  analogWrite(PIN_GREEN, 0);
  analogWrite(PIN_BLUE, 255);
  delay(1000);
  analogWrite(PIN_RED, 255);
  analogWrite(PIN_GREEN, 255);
  analogWrite(PIN_BLUE, 0);
  delay(1000);
  analogWrite(PIN_RED, 255);
  analogWrite(PIN_GREEN, 0);
  analogWrite(PIN_BLUE, 255);
  delay(1000);
  analogWrite(PIN_RED, 0);
  analogWrite(PIN_GREEN, 255);
  analogWrite(PIN_BLUE, 255);
  delay(1000);
 }
