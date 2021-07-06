//Marina Dunn
//PHYS 105
//to compile: $gcc letter_swap.c -o letter_swap.exe
//to run: $letter_swap.exe

#include <stdio.h>

int main()
{
  char mystring[20];
  printf("Please enter a string longer than 4 characters:");
  scanf("%s",&mystring);

  char temp = mystring[0];
  mystring[0] = mystring[1];
  mystring[1] = temp;
  temp = mystring[3];
  mystring[3] = mystring[4];
  mystring[4] = temp;

  printf("Did you type %s?\n",mystring);
}
