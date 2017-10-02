int ledPin = 6;

void setup() {
  pinMode(ledPin,OUTPUT);

}

void loop() {
 
  analogWrite(ledPin, 0);
  delay(1000);

  analogWrite(ledPin, 64);
  delay(1000);


  analogWrite(ledPin, 128);
  delay(1000);


  analogWrite(ledPin, 192);
  delay(1000);


  analogWrite(ledPin, 255t);
  delay(1000);
  }


