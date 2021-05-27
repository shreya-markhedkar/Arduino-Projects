// C++ code

// light led!

//13th pin already has led
//anode +ve longer side, cathode -ve neg shorter side.
int ledPin=13; //light on board lights up

void setup() //has to be there, can be empty
{
  //initialise output pin
  pinMode(ledPin,OUTPUT);
}

void loop()
{
  digitalWrite(ledPin,HIGH);
  delay(1000);
  digitalWrite(ledPin,LOW);
  delay(1000);
}
