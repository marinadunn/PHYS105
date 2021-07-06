//Marina Dunn
//PHYS
//to compile:$gcc Oct_7.c -o Oct_7.exe
//to run: $Oct_7.exe

#include <stdio.h>

int main()
{
  int n;
  printf("Please enter an integer: \n");
  scanf("%i",&n);

  int i;
  float my_array1[n];
  for(i=0; i<n; i++){
    my_array1[i] = i;
     printf("%f\n",my_array1[i]);
  }
  float sum = 0;
  for(i=0; i<n; i++){
    sum = sum + my_array1[i];
    printf("%f\n",sum);
      }
}
