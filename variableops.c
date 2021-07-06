//Marina Dunn
//PHYS 105
//
//

#include <stdio.h>

int main()
{
  int A = 7;
  int B = 4;
  int C;
  int D = 2;
  C=A+B; //Add A to B
  printf("A+B=%i\n",C);
  C=A-B; //Subtract B from A
  printf("A-B=%i\n",C);
 C=A*B; //Multiply A by B
  printf("A*B=%i\n",C);
 C=A/B; //divide A by B
  printf("A/B=%i\n",C);
  C=A%B; //Find remainder when dividing A by B. Only for integers.
  printf("A%B=%i\n",C);
 C=A&B; //Set bits in result only when corresponding bits in both A and B are set
  printf("A&B=%i\n",C);
  C=(A+B)*D; //Calculate expression within parentheses first
  printf("(A+B)*D=%i\n",C);
  C=A+B*D; //Se what happens without parentheses
  printf("A+B*D=%i\n",C);
  C+=A; //Same as C=C+A;
  printf("C+=A; C=%i\n",C);
  C-=B; //Same as C=C*D;
  printf("C-=B; C=%i\n",C);
  C*=D; //Same as C=C*D;
  printf("C*=D; C=%i\n",C);
  C/=D; //Same as C=C/D;
  printf("C/=D; C=%i\n",C);
  C=D++; //C is set equal to D. Then D is increased by 1.
  printf("C=D++; D=%i, C=%i\n",D,C);
  C=++D; //D is increased by 1. Then C is set equal to the new value of D
  printf("C=++D; D=%i, C=%i\n",D,C);
}
