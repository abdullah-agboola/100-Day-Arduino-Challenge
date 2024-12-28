#include <Keypad.h> 

int Green_LED = 3;
int Red_LED = 4;
int Buzzer = 2;
const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1', '2', '3', '4'},
  {'5', '6', '7', '8'},
  {'9', '0', 'A', 'B'},
  {'C', 'D', '/', '.'}
};

byte rowPins[ROWS] = {10, 11, 12, 13}; 
byte colPins[COLS] = {9, 8, 7, 6};    

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

const String password_1 = "A1B2C3"; 
const String password_2 = "122333";   
const String password_3 = "ABC123";    
String input_password;

void setup() {
  Serial.begin(9600); 
  pinMode(Green_LED, OUTPUT);
  pinMode(Red_LED, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  digitalWrite(Green_LED, LOW);
  digitalWrite(Red_LED, LOW);
  digitalWrite(Buzzer, LOW);

}

void loop() {
  char key = keypad.getKey();

  if (key) {
    Serial.println("*");
    digitalWrite(Buzzer, HIGH);
    delay(100);
    digitalWrite(Buzzer, LOW);

    if (key == '/') {
      input_password = ""; 
    } else if (key == '.') {
      if (input_password == password_1 || input_password == password_2 || input_password == password_3) {
        Serial.println("The password is correct");
        digitalWrite(Green_LED, HIGH);
        digitalWrite(Red_LED, LOW);
        delay(1000);
        digitalWrite(Green_LED, LOW);
      } else {
        Serial.println("Incorrect password");
        digitalWrite(Red_LED, HIGH);
        digitalWrite(Green_LED, LOW);
        delay(1000);
        digitalWrite(Red_LED, LOW);
      }

      input_password = ""; 
    } else {
      input_password += key; 
    }
  }
}
