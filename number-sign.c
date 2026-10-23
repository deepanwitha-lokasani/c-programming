//A C program to find whether the given number is positive or negative or zero
#include<stdio.h>
void main()
{
  int a;
  printf("Enter the value of a:");
  scanf("%d",&a);
  if(a>0)
  {
    printf("The number is positive");
  }
  else if(a<0)
  {
    printf("The number is negative");
  }
  else 
  {
    printf("The number is zero");
  }
}
