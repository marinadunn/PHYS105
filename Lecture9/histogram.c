//Marina Dunn
//PHYS 105
//to compile: $pc histogram.c -o histogram.exe
//to run: $histogram.exe

#include <stdio.h>
#include "philsplot.h"

int main()
{
  float xLo = 0, xHi = +5, yLo = +0, yHi = 10;
  float expand = 1.1;
  int boxcolor = 1;
  int linecolor=2, linestyle=1, linewidth=3;

  open_plot ("700x700");

  box_plot (xLo,xHi,yLo,yHi,expand,boxcolor,"","","","");
  float x0 = 0,  y0 = 0;
  float x1 = +1, y1 = +1;
  float x2 = +2, y2 = +5;
  float x3 = +3, y3 = +9;
  float x4 = +4, y4 = +6;
  float x5 = +5, y5 = +3;
  
  locate_plot (xLo, yLo);
 
  int Hist[] = {1,5,9,6,3};
  int i;

  for(i=0; i<5; i++){
 
    drawto_plot (i,Hist[i], linecolor, linestyle, linewidth);
    drawto_plot (i+1,Hist[i], linecolor, linestyle, linewidth);

  }


  flush_plot();

  close_plot();
}
