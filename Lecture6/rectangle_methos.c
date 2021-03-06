//Marina Dunn
//PHYS 105
//to compile: $gcc rectangle_method.c -o rectangle_method.exe
//to run: $rectangle_method.exe
//This program integrates f(x) = x^2 from 2 to 5

#include <stdio.h>

int main()
{
  //Declare the bounds of integration
  float xLo = 2, xHi = 5;
  //Declare temporary variables and final variables
  float rect_area, x, f_x;
  //Declare the variable for the final answer
  float total_area = 0;

  //Declare a count variable i,
  //and the number of rectangles N
  int i, N = 100;

  //Calculate the step size, or interval, dx
  float dx = (xHi - xLo)/N;

  //Loop over all rectangles
  x = xLo; //Start at the left limit
  for(i=0; i<N; i++){
    //Calculate our function to integrate at the current x
    f_x = x*x;

    //Calculate the area of the rectangle and then add it to the total
    rect_area = f_x * dx;
    total_area += rect_area;

    //Move to the next value of x
    x = x + dx;
  }
    //Print out our calculated answer and the true answer
    printf("Integrated area = %f\n",total_area);
    printf("Correct answer = %f\n",(5*5*5-2*2*2)/3.0);
}
