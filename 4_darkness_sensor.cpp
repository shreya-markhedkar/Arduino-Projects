// C++ code
//
int senserPin=0; //showing light 
int ledPin=9;

void setup(){
  analogReference(DEFAULT);
  
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int val = analogRead(senserPin);
  
  val=constrain(val,750,900);
  int ledLevel = map(val,750,900,255,0);
  
  /*if (val < 800) {digitalWrite(ledPin,HIGH);}
  else {digitalWrite(ledPin,LOW);}*/
  
  analogWrite(ledPin,ledLevel);
  
  Serial.println(analogRead(senserPin));
  delay(500);
}
  
