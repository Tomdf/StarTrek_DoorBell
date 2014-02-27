const int speakerPin = A1;
const int ledPin = 0;
const int pirPin = 1;

int speakerValue;

void setup()
{
  pinMode(speakerPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, OUTPUT);
}

void loop()
{
  speakerValue = analogRead(speakerPin);
    
  if (speakerValue >= 175){
     digitalWrite(ledPin, HIGH);
     digitalWrite(pirPin, HIGH);
     delay(1000);
     digitalWrite(ledPin, LOW);
     digitalWrite(pirPin, LOW
     
     );
  }
  delay(10);
}
