//Marina Dunn
//PHYS 105
//to compile: $pc bounce.c -o bounce.exe
//to run: $bounce.exe

#include <stdio.h>
#include "philsplot.h"

//This is the prototype fot the force
//This is overkill here, but is useful in general, since the force can in general be more complicated

float Force(float m, float t, float x, float y, float v);

int main(){
  //start by defining philsplot regions
  float xLo = -5, xHi = 5, yLo = 0, yHi = 5;
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
  float y = +5.0, x = 0; //meters
  float m = 1.0; //kg
  float v = 0; //m/s
  float a; //m/s^2
  float dv, dy;
  // float b = 0.5;
  float F; //kg m/s^2
  float t = 0, dt = 0.01; //seconds

  int i; //a loop variable
  int N = 200; //take N steps
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
    if(y < 0){
      v = -v;
    }
    /* if(v < 0){
      b = +b
	}
    if(v > 0){
      b = -b
      }*/
  }

  //Close
  close_plot();
}
//Here is our force equation
float Force(float m, float t, float x, float y, float v){
  float g = 9.81;
  float b = 0.09;
  if(v < 0){
    return(-m*g + b*v*v);
  }
  else{
    return (-m*g - b*v*v);
  }
}
