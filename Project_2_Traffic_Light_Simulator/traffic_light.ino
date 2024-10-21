int LEDR = 13;
int LEDY = 12;
int LEDG = 11;

void setup() {
  pinMode(LEDR, OUTPUT);
  pinMode(LEDY, OUTPUT);
  pinMode(LEDG, OUTPUT);
}

void loop() {
  digitalWrite(LEDR, HIGH);
  delay(3000);
  digitalWrite(LEDR,LOW);
  delay(500);
  digitalWrite(LEDY, HIGH);
  delay(3000);
  digitalWrite(LEDY,LOW);
  delay(500);
  digitalWrite(LEDG, HIGH);
  delay(3000);
  digitalWrite(LEDG,LOW);
  delay(500);
}
