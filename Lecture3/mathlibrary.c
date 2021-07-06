//Marina Dunn
//PHYS 105
//to compile: $gcc mathlibrary.c -o mathlibrary.exe -lm
//to run: $mathlibrary.exe

#include <stdio.h>
#include <math.h> //this is the math library

int main()
{
  //First we need to get a number from the user
  float x;
  printf("Please enter a number:");
  scanf("%f",&x);

  printf("x       = %f\n",x);
  printf("sqrt(x) = %f\n", sqrt(x) ); //square root of x
  printf("x^3     = %f\n", pow(x,3) ); //power, in this case to the 3rd power
  printf("e^x     = %f\n", exp(x) ); //exponential
  printf("sin(x)  = %f\n", sin(x) ); //sine
  printf("cos(x)  = %f\n", cos(x) ); //cosine
  printf("tan(x)  = %f\n", tan (x) ); //tangeant
  printf("asin(x) = %f\n", asin(x) ); //arcsin aka inverse sine
}
