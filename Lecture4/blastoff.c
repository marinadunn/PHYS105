//Marina Dunn
//PHYS 105
//to compile: $gcc blastoff.c -o blastoff.exe
//to run: $blastoff.exe

#include <stdio.h>

int main()
{
  int count;
  for(count=10; count>=1; count=count+1){
    printf("%i, ",count);
  }
  printf("Blast off!\n");
}
