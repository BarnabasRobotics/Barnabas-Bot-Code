/*
Morse Code Key:
dot = LED on for 100 ms, then LED off for 100 ms
dash = LED on for 300 ms, then LED off for 100 ms
End of Letter = LED off for 1000 ms
End of Word = LED off for 2000 ms


Challenge #1: Write morse code "AN"
Challenge #2: Write morse code "SOS"
Challenge #3: Write morse code for any 5-letter word
Challenge #4: Write a 3-letter morse code and see if a partner can read it.
*/


void setup() {
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  
}

void loop() {
 
  //- the word AN
  
  //A - dot-dash
  
  //dot
  digitalWrite(7,HIGH);
  delay(100);
  digitalWrite(7,LOW);
  delay(100);
  
  //dash
  digitalWrite(7,HIGH);
  delay(300);
  digitalWrite(7,LOW);
  delay(100);
  
  delay(1000);
  
  //N - dash-dot
  
  //dash
  digitalWrite(7,HIGH);
  delay(300);
  digitalWrite(7,LOW);
  delay(100);
  
  //dot
  digitalWrite(7,HIGH);
  delay(100);
  digitalWrite(7,LOW);
  delay(100);
  
  delay(1000);
  
  //-end of the word
  delay(2000);
  
}



