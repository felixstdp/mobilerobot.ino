#include <Arduino.h>
#include "RobotMovil.h"

RobotMovil::RobotMovil(){
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
}

void RobotMovil::forward(int l, int r, int t)
{
  analogWrite(5,l);
  analogWrite(6,r);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  delay(t);
}

void RobotMovil::reverse(int l, int r, int t)
{
  analogWrite(5,l);
  analogWrite(6,r);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
  delay(t);
}

void RobotMovil::brake(int t)
{
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  delay(t);
}

void RobotMovil::rotate(int t)
{
  analogWrite(5,100);
  analogWrite(6,100);
  if (t>0) {
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
   }
  else
  {
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(2,LOW);
    digitalWrite(4,HIGH);
  } 
  delay(abs(t));
}
