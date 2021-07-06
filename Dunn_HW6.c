//Marina Dunn
//PHYS 105
//to compile: $pc Dunn_HW6.c -o Dunn_HW6.exe -lm
//to run: $Dunn_HW6.exe


#include <stdio.h>
#include <math.h>
#include "philsplot.h"


int main(){
  //start by defining philsplot regions
  float xLo = -5, xHi = 5, yLo = 0, yHi = 5;
  open_plot("1000x700");
  setlim_plot(xLo,xHi,yLo,yHi);

  //Draw the "floor"
  int linecolor=13, linestyle=1, linewidth=3;
  locate_plot(xLo,yLo+0.1);
  drawto_plot(xHi,yLo+0.1,linecolor,linestyle,linewidth);

  //These variables are for the ball
  float expand = 4.0;
  int pColor = 13, pVertex=20, pStyle=1,pMem=1;

 
  //Define physical variables, and our initial conditions
  float y = +5.0, x = -5.0; //meters
  float v = 2.0; //m/s
  float t = 0, dt = 0.01; //seconds
  float dy = -.05, dx = +.05;
  float dv;

  putpoint_plot(x,y,pVertex, pStyle, pColor, expand, pMem);
  flush_plot();
  delay_plot(3000);
  delpoint_plot();//this deletes the last point drawn

  int i; //a loop variable
  int N = 2000; //take N steps
  for( i = 0; i < N; i++){
    //the equations of motions
    dy = v*dt;
    y = abs(x);
    v = v + dv;
    t = t + dt;
    x = x + dx;
    //put the plot and draw
   

    if(y < 0){
      v = -v;
    }
    if(y > 0){
      v = +v;
    }
  }
  close_plot();
}

