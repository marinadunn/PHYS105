//Marina Dunn
//PHYS 105
//to compile: $gcc dozenX.c -o dozenX.exe
//to run: $dozenX.exe

#include <stdio.h>

int main()
{
  int r;
   for( r=1; r<=12; r=r+1){
      int i;
       for( i=1; i<=12; i=i+1){
	 printf("X");
       }
       printf("\n");
   }
}
	
