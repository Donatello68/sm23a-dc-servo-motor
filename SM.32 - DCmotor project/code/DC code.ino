int potIn;
int fwdPin = 5;
int revPin = 6;



void setup()
{
pinMode(fwdPin,OUTPUT);
pinMode(revPin,OUTPUT);

  Serial.begin(9600);
  
}

void loop()
{
  potIn = analogRead(A0);
  int output =  potIn /4;
analogWrite(revPin,OUTPUT);
  
  Serial.println(output);
  delay(100);
  
  
}