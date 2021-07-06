//Marina Dunn
//PHYS 105
//to compile: $gcc passbyvalue.c -o passbyvalue.exe
//to run: $passbyvalue.exe

#include <stdio.h>

//This will be a short function that adds on to the variable
void swap(int* temp, int* p);

int main()
{
  //Declare some variables we will use
  int i = 2, j = 77;
  int* p = &j;
  int* temp = &i;

  printf("Before function call: \n");
  printf("i = %i  j = %i\n",i,j);
  swap(temp,p);

  printf("After function call: \n");
  printf("i = %i  j = %i\n",i,*p);
}

void swap(int* temp, int*p){
 int i = *p;
 int j = *temp;
 *p = j;
 *temp = i;
 printf("Inside function call: \n");
 printf("i = %i  j = %i\n",i,*p,*temp);
  return;
}
  
