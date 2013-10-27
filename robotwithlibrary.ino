#include <RobotMovil.h>

RobotMovil robot;

void setup()
{
}

void loop()
{
  robot.forward(80,80,1000);
  robot.brake(3000);
  robot.reverse(120,120,500);
  robot.rotate(250);
  robot.rotate(-250);
}
