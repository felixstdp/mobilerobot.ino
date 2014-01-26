#include <RobotMovil.h>
RobotMovil robot;

#include <IRremote.h>
IRrecv irrecv(9);
decode_results results;

void setup()
{
  irrecv.enableIRIn();
}

void loop() {
  if (irrecv.decode(&results))
  {
    unsigned long IR=results.value;

    switch(IR)
    {
      case 0x511DBB:
        forward(120,120,500);
        break;
      case 0xA3C8EDDB:
        reverse(120,120,500);
        break;
      case 0x52A3D41F:
        rotate(500);
        break;
      case 0x20FE4DBB:
        rotate(-500);
        break;
      case 0xD7E84B1B:
        brake(0);
        break;
    }
    brake(0);
    irrecv.resume();
  }
}
