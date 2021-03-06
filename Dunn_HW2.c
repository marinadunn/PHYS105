// Marina Dunn
// PHYS 105
//to compile: $gcc Dunn_HW2.c -o Dunn_HW2.exe
//to run: Dunn_HW2.exe

#include <stdio.h>

int main()
{
  //We want to calculate the volume of a box, which in this case is length*width*height
  //First we need a length from the user. We will use units of meters.
  float l;
  printf("Please enter a positive length for the box in meters:");
  scanf("%f",&l);
  if (l < 0){ //Here begins the first if statement
    printf("Cannot use a negative number\n");
  }    //here ends the first if BLOCK

  float w;
  printf("Please enter a positive width for the box in meters:");
  scanf("%f",&w);
  if (w < 0){ //Here begins the second if statement
    printf("Cannot use a negative number\n");
  }   //here ends the second if BLOCK

  float h;
  printf("Please enter a positive height for the box in meters:");
  scanf("%f",&h);
  if (h < 0){ //Here begins the third if statement
    printf("Cannot use a negative number\n");
  }  //here ends the third if BLOCK

  float volume = l * w * h;     //this finally calculates the volume
  printf("%f * %f * %f = %f\n", l ,w ,h ,volume);  //this gives the volume in meters cubed
}
