//Marina Dunn
//PHYS105
//to compile: $gcc FtemptoCtemp.c -o FtemptoCtemp.exe
//to run: FtemptoCtemp.exe

#include <stdio.h>

int main(){
  // Objective is to calculate the temperature in Celsius
  float number; // the number is declared here is temp in Farenheit
  printf("Please enter a number in degrees Farenheit: ");
  // Take in the number, or temperature, from the user
  scanf("%f", &number);
  //Print out calculation
  float C = (5.0 / 9.0)*(number - 32.0);
  printf("(5.0/9.0)*(%f-32.0) = %f\n",number,C);
}
