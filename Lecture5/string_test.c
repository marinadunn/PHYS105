//Marina Dunn
//PHYS 105
//to compile: $gcc string_test.c -o string_test.exe
//to run: $string_test.exe

#include <stdio.h>

int main()
{
  printf("What is your name? \n");
  char Marina[20];
  scanf("%s",&Marina);
  printf("Hello %s!\n",Marina);
}
