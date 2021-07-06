//Marina Dunn
//PHYS 105
//to compile: $pc orbital.c -o orbital.exe
//to run: $orbital.exe

#include <stdio.h>
#include <math.h>
#include "philsplot.h"

//Prototypes for the force in the X and Y directions
float ForceX(float m, float t, float x, float y, float vx, float vy, float v);
float ForceY(float m, float t, float x, float y, float vx, float vy, float v);

int main(){
  //Start by setting up the philsplot region
  float xLo = -2, xHi = 2, yLo = -2, yHi = 2;
  open_plot("700x700");
  setlim_plot(xLo,xHi,yLo,yHi);
  //These variables are for the Sun
  float sunExpand = 6.0;
  int sunColor=2, sunVertex=10, sunStyle=1, sunMem=0;
  putpoint_plot(0,0,sunVertex,sunStyle,sunColor,sunExpand,sunMem);

  //These variables are for the Earth
  float earthExpand = 4.0;
  int earthColor=4, earthVertex=10, earthStyle=1, earthMem=1;

  //Define variables and initial conditions
  float x=1, y=0;
  float vx=0, vy=.1;
  float v = sqrt(vx*vx+vy*vy);
  float dy, dx, dvy, dvx; //change variables
  float ax, ay;
  float m = 1; //1 means 1 Earth mass
  float Fx, Fy;
  float r;
  float KE;
  float PE;
  float E;
  float t=0, dt=0.01;
  int i; //a loop variable
  int N = 3000; //take N steps
  for (i=0; i < N; i++){
    Fx = ForceX(m,t,x,y,vx,vy,v);
    Fy = ForceY(m,t,x,y,vx,vy,v);
    ax = Fx/m;
    ay = Fy/m;
    dvx = ax*dt;
    dvy = ay*dt;
    dx = vx*dt;
    dy = vy*dt;
    x = x + dx;
    y = y + dy;
    vx = vx + dvx;
    vy = vy + dvy;
    v = sqrt(vx*vx + vy*vy);
    KE = .5*m*v*v;
    PE = -m/r;
    E = KE + PE;
    printf("E= \n");
    //Draw the point and flush
    putpoint_plot(x,y,earthVertex,earthStyle,earthColor,earthExpand,earthMem);
    flush_plot();
    delay_plot(10);
    delpoint_plot();
  }
}
//Here are our force equations
float ForceX(float m,float t, float x, float y, float vx,float vy, float v){
  float r = sqrt(x*x+y*y);
  float r3 = r*r*r;
  return -m*x/r3;
}
float ForceY(float m,float t, float x, float y, float vx,float vy, float v){
  float r = sqrt(x*x+y*y);
  float r3 = r*r*r;
  return -m*y/r3;
}
