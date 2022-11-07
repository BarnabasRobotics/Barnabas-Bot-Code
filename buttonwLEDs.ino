/*
Morse Code Key:
dot = LED on for 100 ms, then LED off for 100 ms
dash = LED on for 300 ms, then LED off for 100 ms
End of Letter = LED off for 1000 ms
End of Word = LED off for 2000 ms

Challenge #1: If I press the button, turn it on.  If I don't press the button, turn it off
Challenge #2: flip challenge #1
Challenge #3: If I press the button, turn on two lights.  If I don't press the button turn off two lights
Challenge #4: If I press the button, have one light on and the other off.  If I don't press the button, flip it.
Challenge #5: If I press the button, blink one light.  If don't press, turn both off.
Challenge #6: If I press the button, blink one light fast.  If I don't press the button, blink one light slowly.
Challenge #7: If I press the button, say S-O-S.  If I don't press the button, do nothing.


*/


void setup() {
  pinMode(2,INPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  
  
}

void loop() {
  
  if (digitalRead(2) == LOW) {
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
  }
  else {
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
  }

}












