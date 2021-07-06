//Marina Dunn
//PHYS 105
//to compile: $gcc pointers.c -o pointers.exe
//to run: $pointers.exe

#include <stdio.h>

int main()
{
  //Declare some floats and float pointers
  float x = 3.3;
  float* p = &x;
  float y = 99.8;
  //Print out all variables and pointers and do some assignments
  printf("x = %f  p = %p  y = %f\n",x,p,y);
  *p = 4;
  printf("x = %f  p = %p  y = %f\n",x,p,y);
  p = &y;
  printf("x = %f  p = %p  y = %f\n",x,p,y);
  y=x;
  printf("x = %f  p = %p  y = %f\n",x,p,y);
}
