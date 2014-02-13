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
  }
  switch (btcode)
  {
    case 'F':
      robot.forward(100,100,500);
      break;
    case'B':
      robot.reverse(100,100,500);
      break;
    case 'R':
      robot.rotate(250);
      break;
    case 'L'
      robot.rotate(-250);
      break;
    default:
      robot.brake(0);
      btcode='X';
  }
}
