#define limit 15

#include <RobotMovil.h>
RobotMovil robot;

#include <NewPing.h>
NewPing sonar(10,10,50);

int dist

void setup() {}

void loop()
{
  delay(30);
  dist = sonar.ping_cm();
  if (dist==0) dist=50;

  if (dist<limit) robot.reverse(120,120,0);
  if (dist>limit) robot.forward(120,120,0);
  if (dist==limit) robot.brake(0);
}
