
int timer=500;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  for(int thisPin=5;thisPin<8;thisPin++){
  pinMode(thisPin, OUTPUT);
  }

}

// the loop function runs over and over again forever
void loop() {
  for(int thisPin=5;thisPin<8;thisPin++){
    digitalWrite(thisPin, HIGH);
   delay(timer);            
   digitalWrite(thisPin, LOW);            
  }

  for(int thisPin=7;thisPin>=5;thisPin--){
    digitalWrite(thisPin, HIGH);
    delay(timer);            
    digitalWrite(thisPin, LOW);    
    }
}


