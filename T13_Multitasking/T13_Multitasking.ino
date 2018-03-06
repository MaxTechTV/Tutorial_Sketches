int led1 = 13;
int led2 = 12;
int button = 11;

unsigned long lastMillis1;
unsigned long lastMillis2;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  lastMillis1 = millis();
  lastMillis2 = millis();
}

void loop() {

  if ((millis() - lastMillis1) >= 1000) {
    digitalWrite(led1, !digitalRead(led1));
    lastMillis1 = millis();
  }

  if (!digitalRead(button)) {
    lastMillis2 = millis();
  }

  if (millis() - lastMillis2 <= 2000) {
    digitalWrite(led2, HIGH);
  }
  else {
    digitalWrite(led2, LOW);
  }
}





