//Marina Dunn
//PHYS 105
//to compile: $pc Dunn_HW5.c -o Dunn_HW5.exe
//to run: $Dunn_HW5.exe

#include <stdio.h>
#include <stdlib.h>
#include "philsplot.h"

int main()
{
  FILE* fp = fopen("outfile.txt","r");
  int distance[21], number[21]; //numbers for reading in the data
  int i; //a count variable
  int N_distances = 21;
  for(i=0; i<N_distances; i++){
    fscanf(fp,"%i   %i \n",&distance[i], &number[i]);
    printf("%i   %i \n",distance[i],number[i]);
  }

  float xLo = -10, xHi = +10, yLo = 0, yHi = +150; //setting up the plotting region
  float expand = 1;
  int boxcolor = 1;
  int linecolor=13, linestyle=1, linewidth=3;
  

  open_plot ("700x700");

  box_plot (xLo,xHi,yLo,yHi,expand,boxcolor,"","","","");

  locate_plot (distance[0], number[0]);
 
   for(i=0; i<+21; i++){
     drawto_plot (distance[i], number[i], linecolor, linestyle, linewidth);
     drawto_plot (distance[i]+1, number[i], linecolor, linestyle, linewidth);
   }
 
  flush_plot();
  close_plot();
  fclose(fp);
}
