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
  float dist = sonar_L.ping_cm();
  if (dist==0) {dist=50;}

  if (dist<distance) {robot.reverse(0);}
  else {robot.forward(0);}
}

