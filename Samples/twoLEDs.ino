/*

Challenge #1: Make the light blink as fast as you can -- make
sure that you can still see it!

Challenge #2: Make two lights blink

Challenge #3: Make two lights blink - but while one light is blinking
make sure the other light is off.

Challenge #4: Turn on the lights back and forth.

Challenge #5: Blink both lights synchronously
*/


void setup() {
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  
}

void loop() {
  digitalWrite(7,LOW);
  delay(500);
  digitalWrite(7,HIGH);
  delay(500);
  
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(500);
  
  
}



