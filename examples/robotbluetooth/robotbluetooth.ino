#include <RobotMovil.h>
RobotMovil robot;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()>0)
  {
    char btcode=Serial.read();
    if (btcode=='F') robot.forward(100,100,500);
    if (btcode=='B') robot.reverse(100,100,500);
    if (btcode=='R') robot.rotate(250);
    if (btcode=='L') robot.rotate(-250);
    btcode='X';
    robot.brake(0);
  }
}
