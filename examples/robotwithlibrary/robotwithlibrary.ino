#include <RobotMovil.h>
RobotMovil robot;

void setup()
{
}

void loop()
{
  robot.forward(120,120,1000);
  robot.brake(100000);
}
