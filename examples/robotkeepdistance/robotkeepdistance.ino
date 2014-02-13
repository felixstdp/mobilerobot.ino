#include <RobotMovil.h>
RobotMovil robot;

#include <NewPing.h>
NewPing sonar(10,10,50); // trigger y echo al pin 10, distancia máxima limitada a 50cm

int limit=15; // límite de frenado y velocidad de avance
int vel=120;

int dist

void setup() {}

void loop()
{
  delay(30);  // necesario para que el sensor espere el eco del pulso
  dist = sonar.ping_cm();
  if (dist==0) dist=50;  // corrige las distancias mayores de 50cm que dan lectura 0

  if (dist<limit) robot.reverse(vel,vel,0);
  if (dist>limit) robot.forward(vel,vel,0);
  if (dist==limit) robot.brake(0);
}
