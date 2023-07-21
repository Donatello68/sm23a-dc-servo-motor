# sm23a-dc-servo-motor
# part:01 
# sm32a-Servo-Motor-Control-with-Arduino
This project demonstrates how to control a servo motor using an Arduino board.
 By following the instructions provided, you'll be able to build a simple circuit and program the Arduino to control the servo motor's position.

# Prerequisites :
To successfully replicate this project, you'll need the following components:

Arduino board (e.g., Arduino Uno)
Servo motor
Breadboard and jumper wires


# Circuit Diagram
The circuit diagram illustrates how to connect the components together.
For this project, I based my drawing on the circuit diagram on TinkerCad. It's an easy and simple site to learn how to build a circuit. I will also attach a link to the site where you find the scheme.

# link: https://www.tinkercad.com/things/3kZtHz2zAqj


# Installation
In the first step, we register on the Tinkercad website
Then we register an account
Then we go to the Create option. Three options will appear for you. We will choose to create an electrical circuit
Then, after entering, we prepare the pieces that we need to form the project: a servo motor
Arduino Uno
9 volt battery
Breadboard and jumper wires
Then we recommend between the pieces according to the attached figure
After forming the electrical circuit, we go to the code field to write the engine operation programming code
  And control it (control the angle of movement and duration)

 # the code:

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


# part:02
# sm23a-DC.Motor.Control.with.Arduino
This project demonstrates how to control a DC motor using an Arduino board. 
By following the instructions provided, you'll be able to build a simple circuit and program the Arduino to control the motor's speed and direction.
# Prerequisites :
To successfully replicate this project, you'll need the following components:
Arduino board (e.g., Arduino Uno)
DC motor
Motor driver (e.g., L293D)
potentiometer
Breadboard and jumper wires
Power supply (depending on the motor specifications)
# Circuit Diagram
The circuit diagram illustrates how to connect the components together.
For this project, I based my drawing on the circuit diagram on TinkerCad. It's an easy and simple site to learn how to build a circuit. I will also attach a link to the site where you find the scheme.
# link: https://www.tinkercad.com/things/5VOjueXPXNN
# Installation
In the first step, we register on the Tinkercad website
Then we register an account
Then we go to the Create option. Three options will appear for you. We will choose to create an electrical circuit
Then, after entering, we prepare the pieces that we need to form the project: a DC motor
Arduino Uno
9 volt battery
Breadboard and jumper wires
Motor driver (e.g., L293D)
potentiometer
Then we recommend between the pieces according to the attached figure
After forming the electrical circuit, we go to the code field to write the engine operation programming code
  And control it (increase and decrease its speed)
 # the code:

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
