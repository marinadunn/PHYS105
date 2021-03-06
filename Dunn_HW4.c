//Marina Dunn                                                                   //PHYS 105                                                                    
//to compile: $gcc Dunn_HW4.c -o Dunn_HW4.exe -lm                               //to run: $Dunn_HW4.exe                                                                                                   
//We are writing a program to use the trapezoidal method to estimate an integral                                          
#include <stdio.h>
#include <math.h>

int main()
{
 float xLo = -10, xHi = 10; //Start at -10, go to 10 
 float trap_area, x, f_x, f_xdx;
 float total_area = 0;

//I am going to integrate using 100 slices  
 int i, N = 1000;

//Calculate the step size, or interval, dx                                      
float dx = (xHi - xLo)/N;

//Loop over all the trapezoids                                                                                          
x = xLo; //Start at the left limit
for(i=0; i<N; i++){
//Calculate the function to integrate at the current x                                                                
f_x = sqrt(M_PI)*exp(-(x*x));
 f_xdx = sqrt(M_PI)*exp(-(x+dx)*(x+dx));
//Calculate the area of the trapezoid and then add it to the total                                                  
trap_area = (f_x + (f_xdx)) * (dx/2);
total_area += trap_area;

//Move to next value of x                                                                                           
x = x + dx;
  }
printf("The calculated area = %f\n",total_area);
  }
