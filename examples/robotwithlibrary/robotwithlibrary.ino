#include <RobotMovil.h>
RobotMovil robot;

void setup()
{
}

void loop()
{
  robot.forward(120,120,1000); // avance con velocidad rueda derecha, rueda izquierda y tiempo en ms
  robot.reverse(120,120,1000); // idem pero retroceso
  robot.rotate(1000); // giro durante un tiempo en ms, valores negativo o positivos indican sentido de giro
  robot.brake(100000); // detiene el robot un tiempo
}
