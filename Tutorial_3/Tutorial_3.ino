// Author: MaxTechTV
// Sketch zu Arduino Tutorial 3 - Einfacher Input
// https://www.youtube.com/watch?v=eaFvQG8wrGw

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}
void loop() {
  int SchalterZustand;
  SchalterZustand = digitalRead(2);
  Serial.println(SchalterZustand, DEC);
}
