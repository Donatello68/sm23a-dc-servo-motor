#include<Servo.h>
Servo myservo;


void setup()
{
myservo.attach(5);
myservo.write(0);

}

void loop()
{
 
  myservo.write(45);
  delay(2000);
      myservo.write(90);
  delay(2000);
      myservo.write(0);
  delay(2000);
      myservo.write(90);
  delay(4000);
}