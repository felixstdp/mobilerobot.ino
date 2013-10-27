#include <RobotMovil.h>
RobotMovil robot();

#include <NewPing.h>
NewPing sonar_L(10,10,50);
NewPing sonar_R(11,11,50);

void setup()
{
}

void loop()
{
  delay(30);
  float dist_L = sonar_L.ping_cm();
  if (dist_L==0) {dist_L=50;}

  delay(30);
  float dist_R = sonar_R.ping_cm();
  if (dist_R==0) {dist_R=50;}
 
  float dist=min(dist_L,dist_R);
 
  if (dist<20)
  {
    if (dist_L>dist_R) {robot.rotate(250);}
    else {robot.rotate(-250);}
  }
  else {robot.forward(100,100,0);}
}

