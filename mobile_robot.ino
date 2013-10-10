#define vel 160
#define L_CTRL_1 2
#define L_CTRL_2 4
#define PWM_L 5
#define R_CTRL_1 7
#define R_CTRL_2 8
#define PWM_R 6

#include <NewPing.h>
NewPing sonar_L(10,10,50);
NewPing sonar_R(11,11,50);

void setup()
{
  pinMode(L_CTRL_1,OUTPUT);
  pinMode(L_CTRL_2,OUTPUT);
  pinMode(R_CTRL_1,OUTPUT);
  pinMode(R_CTRL_2,OUTPUT);
  pinMode(PWM_L,OUTPUT);
  pinMode(PWM_R,OUTPUT);
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
    if (dist_L>dist_R) {rotate(250);}
    else {rotate(-250);}
  }
  else {forward(1);}
}

void forward(int t)
{
  analogWrite(PWM_L,vel);
  analogWrite(PWM_R,vel);
  digitalWrite(R_CTRL_1,LOW);
  digitalWrite(R_CTRL_2,HIGH);
  digitalWrite(L_CTRL_1,LOW);
  digitalWrite(L_CTRL_2,HIGH);
  delay(t);
}

void reverse(int t)
{
  analogWrite(PWM_L,vel);
  analogWrite(PWM_R,vel);
  digitalWrite(R_CTRL_1,HIGH);
  digitalWrite(R_CTRL_2,LOW);
  digitalWrite(L_CTRL_1,HIGH);
  digitalWrite(L_CTRL_2,LOW);
  delay(t);
}

void brake(int t)
{
  analogWrite(PWM_L,vel);
  analogWrite(PWM_R,vel);
  digitalWrite(R_CTRL_1,LOW);
  digitalWrite(R_CTRL_2,LOW);
  digitalWrite(L_CTRL_1,LOW);
  digitalWrite(L_CTRL_2,LOW);
  delay(t);
}

void rotate(int t)
{
  analogWrite(PWM_L,vel);
  analogWrite(PWM_R,vel);
  if (t>0) {
    digitalWrite(R_CTRL_1,LOW);
    digitalWrite(R_CTRL_2,HIGH);
    digitalWrite(L_CTRL_1,HIGH);
    digitalWrite(L_CTRL_2,LOW);
   }
  else
  {
    digitalWrite(R_CTRL_1,HIGH);
    digitalWrite(R_CTRL_2,LOW);
    digitalWrite(L_CTRL_1,LOW);
    digitalWrite(L_CTRL_2,HIGH);
  } 
  delay(abs(t));
}
