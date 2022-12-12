#include <Servo.h>

Servo headMotor;
Servo rightMotor;
Servo leftMotor;

/*
Morse Code Key:
dot = LED on for 100 ms, then LED off for 100 ms
dash = LED on for 300 ms, then LED off for 100 ms
End of Letter = LED off for 1000 ms
End of Word = LED off for 2000 ms

Challenges:
1) Move head to using the button
2) Check arms are working too
3) Calibrate our robot (arms straight out, head looking forward)
4) Move arms and head when you press the button
5) Combine the lights, buzzer and motors using functions
6) Make your robot dance however you want
*/

int ultrasonic(int trig_pin, int echo_pin) {
  
  long time;
  float distance;
  
  //-trigger a sound 
  // send out trigger signal
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(20);
  digitalWrite(trig_pin, LOW);
  
  //- a sound has gone out!!
  //- wait for a sound to come back
  
  time = pulseIn(echo_pin, HIGH);
  
  //- calculate the distance in centimeters
  distance = 0.01715 * time;
  
  return distance;

}

void setup() {
  pinMode(8,INPUT_PULLUP);
  
  pinMode(3,OUTPUT); //trigger
  pinMode(4,INPUT); //echo
  
  
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(13,OUTPUT);
  
  pinMode(9,OUTPUT); //- head
  pinMode(10,OUTPUT); //- right arm
  pinMode(11,OUTPUT); //- left arm
  
  headMotor.attach(9);
  rightMotor.attach(10);
  leftMotor.attach(11);
  
  headMotor.write(90);
  rightMotor.write(90);
  leftMotor.write(90);
  
  Serial.begin(9600);
  
  
}

void on() {
  digitalWrite(7,HIGH);
  digitalWrite(13,HIGH);
    
  tone(6,261);
    
  delay(100);
    
  tone(6,523);
    
  delay(100);
}

void off() {
  digitalWrite(7,LOW);
  digitalWrite(13,LOW);
    
  noTone(6);
}

void loop() {
  
  Serial.println(ultrasonic(3,4));
  delay(100);
  
  if (ultrasonic(3,4) < 5) {
    
    on();
    
    delay(1000);
    
    rightMotor.write(180);
    leftMotor.write(0);
    headMotor.write(180);
    
    delay(2000);
    
    rightMotor.write(0);
    leftMotor.write(180);
    headMotor.write(90);
    
    delay(2000);
    
  }
  else if (digitalRead(8) == LOW) {
    on();
    
    delay(1000);
    
    rightMotor.write(180);
    leftMotor.write(0);
    headMotor.write(180);
    
    delay(2000);
    
    rightMotor.write(0);
    leftMotor.write(180);
    headMotor.write(90);
    
    delay(2000);
    
  }
  else {
    off();
  }

}











