//Marina Dunn
//PHYS 105
//to compile: $gcc gaussian.c -o gaussian.exe -lm
//to run: $gaussian.exe

#include <stdio.h>
#include <math.h>

float f(float x); //this is the prototype

int main()
{
  float x = -5; //Start at -5
  float y; //This will hold f(x)
  float step = 0.5; //Step size

  int i; //We will use a loop, and this is our count variable
  for( i = 0; i < 21; i++){
    y = f(x);
    printf("x = %f   y = %e\n",x,y);
    x = x + step; //increment x
  }
}

//Now write our function
float f(float x){
  return exp(-(x*x));
}
