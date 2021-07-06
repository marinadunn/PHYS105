//Marina Dunn
//PHYS 105 Final Project
//to compile: $gcc fibonacci.c -o fibonacci.exe
//to run: $fibonacci.exe

/*The purpose of this project is to create a program that uses a recursive function to find the Nth number in the Fibonacci sequence. The Fibonacci sequence is a series of numbers that begins with 0 and 1, and then the following numbers are found by adding the two previous ones together (i.e. (0+1) = 1, which would be the next number, and then (1+1) = 2, which would be the following). This means that the rule for this sequence would be X_n = X_n-1 + X_n-2.*/

//Fun extra tidbits: if we made squares with widths equal to the numbers in the Fibonacci sequence, starting with two boxes of width 1, and then placed them so that all the sides fit neatly together, we could draw a perfect infinite spiral known as the "Fibonacci Spiral."
//Also, the sequence was first introduced by Italian mathematician Leonardo Bonacci in 1202 in his book "Liber Abaci."

//There was much research on recursive functions for this.

#include <stdio.h>

int Fibonacci(int);

int main(){

//Knowing that the rule is X_n = X_n-1 + X_n-2, the user can give a value for "n", the number of terms to display up to in the sequence

int n, i = 0, k;

 printf("Enter the number of terms to display in the Fibonacci sequence: ");
 scanf("%i",&n);        //Taking in the number from the user

 printf("The first %i  terms in the Fibonacci Sequence are: \n",n);

//The sequence starts out with a 0 and 1, then proceeds to sum

 for (k = 1; k <= n; k++){
   printf("%i\n",Fibonacci(i)); 
   i++;}

 return 0;
}

int Fibonacci(int n){
 if (n == 0)
   return 0;                  //First term of sequence
 else if (n == 1)
   return 1;                 //Second term of sequence
 else
   return ( Fibonacci(n-1) + Fibonacci(n-2) );    //For the rest of the terms
 }

//If this were not recursive, we could do this whole process in main if we wanted, but it seemed more logical this way
