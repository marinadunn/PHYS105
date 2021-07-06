//Marina Dunn
//PHYS 105
//to compile: $gcc Dunn_HW3.c -o Dunn_HW3.exe lm
//to run: $Dunn_HW3.exe

#include <stdio.h>
#include <math.h>

int main()
{
  //Objective is to find all roots of a quadratic equation
  float a, b, c;
  float radicand;
  float x1;
  float x2;
  float realroot;
  float imaginaryroot;
  //the coefficients are "a" "b" and "c" int the quadratic equation ax^2 + bx + c
  printf("Please enter a b c which are the coefficients of the quadratic equation:\n");
  scanf("%f %f %f", &a, &b, &c);

  radicand = (b*b)-(4*a*c);  //this is what's inside the radical
  if (radicand > 0){//there will be two roots because of the +/-
    printf("Roots are real\n");
    x1 = ((-b + sqrt(radicand))/(2*a)); //this is one possible root
    x2 = ((-b - sqrt(radicand))/(2*a)); //this is another possible root
    printf("x1 = %f\n",&x1);
    printf("x2 = %f\n",x2);
    }
  if (radicand < 0){
    printf("There are imaginary roots\n");
    realroot = (-b)/(2*a);
    imaginaryroot = (sqrt(abs(radicand)))/(2*a);
      // x1 = real + imaginary*("i")
      // x2 = real - imaginary*("i")
      printf("realroot = %f + %f i\n",&realroot,&imaginaryroot);
      printf("realroot = %f - %f i\n",&realroot,&imaginaryroot);
     }
  else if (radicand == 0){//sqrt(radicand) will be 0
    printf("Roots are real\n");
    x1 = (-b)/(2*a); //this is one possible root
    x2 = (-b)/(2*a); //this is another possible root
    printf("x1 = %f\n",&x1);
    printf("x2 = %f\n",&x2);
    }
}
