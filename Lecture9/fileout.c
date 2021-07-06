//Marina Dunn
//PHYS 105
//to compile: $gcc fileout.c -o fileout.exe
//to run: $fileout.exe

#include <stdio.h>
int main()
{
  FILE* fp = fopen("test.txt","w");
  fprintf(fp,"Hello world! I am in a file\n");
}
