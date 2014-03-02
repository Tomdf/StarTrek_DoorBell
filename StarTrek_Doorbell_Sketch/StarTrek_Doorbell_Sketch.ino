/* Written for ATtiny85 using Arduino IDE 1.0.5
 This code monitors the voltage level of a doorbell's
 speaker wire. If the voltage is higher than a set amount 
 the ATtiny momentarily sets the pin connected to the chime's
 PIR sensor's signal wire to high, as well as flashing a LED.
 3-1-14
 Tom Flock
 */

//Define which wires are attached to what pin
const int speakerPin = A1;
const int ledPin = 0;
const int pirPin = 1;

//Create a variable to store the speaker's voltage value
int speakerValue;

void setup()
{
  //Set the pins as inputs or outputs
  pinMode(speakerPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, OUTPUT);
}

void loop()
{
  //Read the voltage on the speaker wire pin as an analog
  //value and store it in the variable speakerValue
  speakerValue = analogRead(speakerPin);

  //is the speaker voltage greater than zero?
  if (speakerValue >= 175){
    //yes it is!
    digitalWrite(ledPin, HIGH); //turn the LED on
    digitalWrite(pirPin, HIGH); //send 3.3V to the PIR sensor wire
    delay(1000);                //pause for one second
    digitalWrite(ledPin, LOW);  //turn the LED off
    digitalWrite(pirPin, LOW);  //set the PIR sensor wire back to                        
                                //zero volts
  }
  
  delay(10); //pause for 10 milliseconds before starting over
}


