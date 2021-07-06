//Marina Dunn
//PHYS 105
//to compile: $gcc squared.c -o squared.exe
//to run: squared.exe

#include <stdio.h>

int main(){
  float number; //number is declared here
  //Below is a prompt to the user
  printf("Please enter a number to square:");
  //Take in the number from the user
  scanf("%f", &number);
  //Print out the calculation
  float square = number * number;
  printf("%f * %f = %f\n",number,number,square);
}
