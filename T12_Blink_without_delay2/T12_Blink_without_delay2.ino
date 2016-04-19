/* Blink without Delay II 

Author: Maximilian Hentsch

Turns two LEDs on and off in set intervals without the use of the delay() function. 
This shows a method how to code non blocking code, that can handle multiple timed events 
independently of each other. 

 */


int led1_pin = 7;
int led2_pin = 8;

long timer1 = 0;
long timer2 = 0;
long currentTime = 0;

boolean led1 = false;
boolean led2 = false;

void setup() {
  pinMode(led1_pin, OUTPUT);
  pinMode(led2_pin, OUTPUT);
  currentTime = millis();
}

void loop() {
  currentTime = millis();

  if ((currentTime - timer1) >= 500) {
    led1 != led1;
    digitalWrite(led1_pin, led1);
    timer1 = currentTime;
  }

  if ((currentTime - timer2) >= 1000) {
    led2 != led2;
    digitalWrite(led2_pin, led2);
    timer2 = currentTime;
  }
}
