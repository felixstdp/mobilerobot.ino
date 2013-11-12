#define distance 30

#include <RobotMovil.h>
RobotMovil robot;

#include <NewPing.h>
NewPing sonar(10,10,50);

void setup()
{
}

void loop()
{
  delay(30);
  int dist = sonar.ping_cm();
  if (dist==0) {dist=50;}

  if (dist<distance) {robot.reverse(120,120,0);
  if (dist>distance) {robot.forward(120,120,0);
  if (dist==distance) {robot.brake(0)};
}
