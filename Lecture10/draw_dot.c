//Marina Dunn
//PHYS 105
//to compile: $pc draw_dot.c -o draw_dot.exe
//to run: $draw_dot.exe

#include <stdio.h>
#include "philsplot.h"
#include <math.h>

float gaus(float x); //this is prototype

int main()
{
  float xLo = -10, xHi = +10, yLo = -7, yHi = +7;
  open_plot("1000x700");
  setlim_plot(xLo,xHi,yLo,yHi); //this plots without axes

  //Variables for the dot
  float expand = 4.0;
  int pColor = 13, pVertex=20, pStyle=1, pMem=1;

  //Draw a dot at (-10,0)
  float x = -10.0, y = 10.0;
  int i;
  for(i=0; i<1000; i++){
  putpoint_plot(x,y, pVertex, pStyle, pColor, expand, pMem);
  x = x + .002;
  y = gaus(x); 
  flush_plot();
  delay_plot(10);
  delpoint_plot();
  }

  //Close
  close_plot();
}
  float gaus(float x){
    return exp(-x*x);
  }

