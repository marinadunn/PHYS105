//Marina Dunn
//PHYS 105
//to compile: $gcc manywalks.c -o manywalks.exe
//to run: $manywalks.exe

#include <stdio.h>
#include <stdlib.h>

int main(){
  int N_steps = 10; //Total number of steps
  int N_walks = 1000; //Total number of walks
  int N_distances = 2*N_steps+1;
  //This is the total number of possible distances
  int p; //Position
  int R; //Will hold the random numbers
  int i,j; //Count variable we will use

  //Here is the array that contains how many walks of a given length occur
  //Index 0 corresponds to a walk of -10
  //Index N_steps+1 is a walk of +1
  int distance_counter[N_distances];

  //First we have to loop over distance_counter
  //And set all of the elements equal to 0
  for(i=0; i<N_distances; i++){
    distance_counter[i] = 0;
  }

  //Complete N_walks walks in total
  for(i=0; i<N_walks; i++){
    p = 0;
    //Each walk is N = N_steps - [0,1] so that some walks are even and some are odd
    int N = N_steps - rand()%2;
    for(j=0; j<N; j++){
      R = (rand()%2) *2-1; //R is -1 or +1
      p = p + R; //Take the step
    }
    //Increment the destination array
    distance_counter[p+N_steps]++;
  }
    
  //Loop over all distances and write the data to a file and the screen
  FILE* fp = fopen("outfile.txt","w");
  for(i=0; i<N_distances; i++){
      printf("%i   %i\n",i-N_steps,distance_counter[i]);
      fprintf(fp, "%i   %i\n",i-N_steps,distance_counter[i]);
    }

    //Close the file
    fclose(fp);
  }
