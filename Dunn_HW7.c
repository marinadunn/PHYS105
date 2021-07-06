//Marina Dunn
//PHYS 105 
//to compile: $pc Dunn_HW7.c -o Dunn_HW7.exe
//to run: $Dunn_HW7.exe

#include <stdio.h>
#include "philsplot.h"
#include <math.h>

float Force(float m, float t, float x, float y, float v);


int main(){
  //start by defining philsplot regions
  float xLo = -5, xHi = 5, yLo = -5, yHi = 2;
  open_plot("700x700");
  setlim_plot(xLo,xHi,yLo,yHi);

  //Draw the "floor"
  int linecolor=13, linestyle=1, linewidth=3;
  locate_plot(xLo,yLo+0.1);
  drawto_plot(xHi,yLo+0.1,linecolor,linestyle,linewidth);

  //These variables are for the ball
  float expand = 4.0;
  int pColor = 13, pVertex=20, pStyle=1,pMem=1;

  //Define physical variables, and our initial conditions
  float y = 0, x = 0; //meters
  float m = 2; //kg
  float v = 0; //m/s
  float a; //m/s^2
  float dv, dy;
  float F; //kg m/s^2
  float t = 0, dt = 0.05; //seconds

  int i; //a loop variable
  int N = 500; //take N steps
  for( i = 0; i < N; i++){
    //the equations of motions
    F = Force(m,t,x,y,v);
    a = F/m;
    dy = v*dt;
    dv = a*dt;
    y = y + dy;
    v = v + dv;
    t = t + dt;
    //put the plot and draw
    putpoint_plot(x,y,pVertex, pStyle, pColor, expand, pMem);
    flush_plot();
    delay_plot(30);
    delpoint_plot();//this deletes the last point drawn
   
    if(y < 0){ v = -v ;
    }
 
  }

  //Close
  close_plot();
}
//Here is our force equation, which always points in the y direction
float Force(float m, float t, float x, float y, float v){
  float g = -9.81;
  float b = 0.1;
  float k = 2; //N/m, spring constant
  return(m*g - b*v*v - k*x);
    }

