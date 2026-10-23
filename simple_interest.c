//A C program to find simple interest
#include<stdio.h>
void main()
{
  int p,t;
  float r,SI;
  printf("Enter the value of p,t,r:\n");
  scanf("%d%d%f",&p,&t,&r);
  
  SI=p*t*r/100;
  printf("Simple interest is %f\n",SI);
 
}
