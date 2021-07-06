//Marina Dunn
//PHYS 105
// $gcc inclass.c -o inclass.exe -lm
//to run: $inclass.exe

#include <stdio.h>
#include <math.h> //the math library yay

int main()
{       //start of main BLOCK
  //First we need a number from the user
  float x;
  printf("Please enter a number:");
  scanf("%f",&x);
  if ( x > -1 && x < 1 ){    //start of if BLOCK
    printf("asin(x)  = %f\n", asin(x) ); //arcsin aka inverse sine
  }else if ( x > 1 || x < -1 ){    //start of else if BLOCK
    printf("Congratulations, you have broken math\n");
  }
}
