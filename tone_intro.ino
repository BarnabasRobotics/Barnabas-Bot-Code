/*
Morse Code Key:
dot = LED on for 100 ms, then LED off for 100 ms
dash = LED on for 300 ms, then LED off for 100 ms
End of Letter = LED off for 1000 ms
End of Word = LED off for 2000 ms

*/


void setup() {
  pinMode(8,INPUT_PULLUP);
  
  
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(13,OUTPUT);
  
  
}

void loop() {
  
  if (digitalRead(8) == LOW) {
    digitalWrite(7,HIGH);
    digitalWrite(13,HIGH);
    
    tone(6,261);
    
    delay(100);
    
    tone(6,523);
    
    delay(100);
    
    
  }
  else {
    digitalWrite(7,LOW);
    digitalWrite(13,LOW);
    
    noTone(6);
    
  }

}












