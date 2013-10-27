#ifndef RobotMovil_h
#define RobotMovil_h

class RobotMovil {
  public:  
    RobotMovil ();
    void forward(int l, int r, int t);
    void reverse(int l, int r, int t);
    void rotate(int t);
    void brake(int t);
};
#endif
