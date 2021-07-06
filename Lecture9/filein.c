//Marina Dunn
//PHYS 105
//to compile: $gcc filein.c -o filein.exe
//to run: $filein.exe

#include <stdio.h>

int main()
{
  FILE* fp = fopen("outfile.txt","r");
  int i; //A count variable
  int distance, number; //numbers for reading in the data
  int N_distances = 21;
  for(i=0; i<N_distances; i++){
    fscanf(fp,"%i   %i\n",&distance,&number);
    printf("$i   %i \n",distance,number);
  }
  //Close the file
  fclose(fp);
}
