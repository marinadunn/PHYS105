//Marina Dunn
//PHYS 105
//to compile: $pc Dunn_HW5.c -o Dunn_HW5.exe
//to run: $Dunn_HW5.exe

#include <stdio.h>
#include "philsplot.h"

int main()
{
  FILE* fp = fopen("outfile.txt","r");
  int i; //A count variable
  int distance[21], number[21]; //numbers for reading in the data
  int N_distances = 21;
  for(i=0; i<N_distances; i++){
	fscanf(fp,"%i   %i \n",&distance[i],&number[i]);
	printf("%i   %i \n",distance[i],number[i]);
      }
  //Setting up plotting window
  float xLo = -10, xHi = +10, yLo = +0, yHi = 150;
  float expand = 1.1;
  int boxcolor = 1;
  int linecolor=13, linestyle=1, linewidth=3;

  open_plot ("700x700");
  box_plot (xLo,xHi,yLo,yHi,expand,boxcolor,"","","","");
  
  float x1 = -10 , y1 = 0;
  locate_plot (distance[0], number[0]);
 

  for(i=0; i<21; i++){
 
    drawto_plot (distance[i],number[i], linecolor, linestyle, linewidth); //vertical line
    drawto_plot (distance[i]+1,number[i], linecolor, linestyle, linewidth); //horizontal line
  }
  fclose(fp);
  //Flush to screen and close
  flush_plot();
  close_plot();
}
