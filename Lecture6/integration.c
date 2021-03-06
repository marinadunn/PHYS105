//Marina Dunn
//PHYS 105
//to compile: $gcc integration.c -o integration.exe -lm
//to run: $integration.exe

#include <stdio.h>
#include <math.h>

int main()
{
  //Declare the bounds of integration
  float xLo = 0, xHi = 2* M_PI;
  //Declare temporary variables and final variables
  float rect_area, x, f_x;
  //declare the variable for the final answer
  float total_area = 0;

  //declare a count variable i, and the number of rectangles N
  int i, N = 100;

  //Calculate the step size, or interval, dx
  float dx = (xHi-xLo)/N;

  //Loop over all the rectangles
  x = xLo; //Start at the left limit
    for(i=0; i<N; i++){
      //Calculate our function to integrate at the current x
      f_x = sin(x);

      //Calculate the area of the rectangle and then add it to the total
      rect_area = f_x * dx;
      total_area += rect_area;

      //Move to the next value of x
      x = x + dx;
    }
  //Print out our calculated answer and the true answer
  printf("Integrated area = %f\n", total_area);
  printf("Correct answer = %f\n",((-cos(2*M_PI))+cos(0)));
}
