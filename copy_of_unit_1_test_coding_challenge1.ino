#include <Servo.h>

int buttonPin = 4;
int motorPin = 3;
int ledPin = 5;
Servo motor;

void setup()
{
 Serial.begin(9600);
 motor.attach(motorPin);
 pinMode(buttonPin, INPUT);
 pinMode(3, OUTPUT);
}

void loop()
{
    if(digitalRead(buttonPin) == 1)
      {
       for(int i = 0; i<180; i= i+5)
       {
         motor.write(i);
         delay(50);
         digitalWrite (3,HIGH);
         delay(100);
         digitalWrite (3,LOW);
         delay(100);
       }
      }
    else
      {
        motor.write(0);
          delay(10);
      }
}