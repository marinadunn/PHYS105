//Marina Dunn
//PHYS 105
//to compile: $gcc sizeof.c -o sizeof.exe
//to run: $sizeof.exe

#include <stdio.h>

int main(){
  char a;
  short b;
  int c;
  long d;
  float e;
  double f;
  long double g;
  printf("size of char = %i\n",        sizeof(a));
  printf("size of short = %i\n",       sizeof(b));
  printf("size of int = %i\n",         sizeof(c));
  printf("size of long = %i\n",        sizeof(d));
  printf("size of float = %i\n",       sizeof(e));
  printf("size of double = %i\n",      sizeof(f));
  printf("size of long double = %i\n", sizeof(g));
  //shows how many bytes each letter is taking up in the computer
}
