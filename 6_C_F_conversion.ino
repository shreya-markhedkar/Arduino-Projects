#include <Wire.h>

int temp_add=72;

void setup()
{
  Serial.begin(9600);
  Wire.begin();
}

void loop()
{
  Wire.beginTransmission(temp_add);
  Wire.send(0);
  Wire.endTransmission();
  Wire.requestFrom(temp_add,1)
  while(Wire.available()==0);
    int c=Wire.receive();
  int f= round(c*9.0/5.0 +32.0);
  
  Serial.print(c);
  Serial.print("C");
  Serial.print(f);
  Serial.println("F");
}
