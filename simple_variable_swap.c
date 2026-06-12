#include<stdio.h>
int main()
{
  int C,D;
  printf("Enter value for C and D, respectively: ");
  scanf("%d %d",&C,&D);
  printf("Original value contained variable: C=%d and D=%d",C,D);
  int t;
  t=C;
  C=D;
  D=t;
  printf("\nThe value contained by C=%d and D=%d, after interchange.",C,D);
  return 0;
}