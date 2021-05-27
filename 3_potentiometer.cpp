// C++ code
//
int potpin=0;

void setup()
{
  pinMode(potpin,INPUT);
  Serial.begin(9600); //data rate in bits per second 
}

void loop()
{
  Serial.println(analogRead(potpin)); // print l n
  delay(1000);
}
