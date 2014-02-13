#include <RobotMovil.h>
RobotMovil robot; 

#include <NewPing.h>
NewPing sonar_L(10,10,50);  // trigger y echo al pin 10, distancia máxima limitada a 50cm
NewPing sonar_R(11,11,50);

float dist_L, dist_R, dist

void setup()
{
}

void loop()
{

// lee los sensores HC-SR04

  delay(30);  // necesario para que el sensor espere el eco del pulso
  dist_L = sonar_L.ping_cm();
  if (dist_L==0) {dist_L=50;}  // corrige las distancias mayores de 50cm que dan lectura 0

  delay(30);
  dist_R = sonar_R.ping_cm();
  if (dist_R==0) {dist_R=50;}
 
  dist=min(dist_L,dist_R);
 
  if (dist<20)
  {
    if (dist_L>dist_R) robot.rotate(250);
    else robot.rotate(-250);
  }
  else robot.forward(120,120,0);
}
