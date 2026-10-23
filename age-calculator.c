//A C program to find age
#include<stdio.h>
void main()
{
  int a,b,age;
  printf("Enter your birth year: ");
  scanf("%d",&a);
  printf("Enter your present year: ");
  scanf("%d",&b);
  if(b<=0)
  {
    printf("Invalid year");
  }
  else if(a<=0||a>b)
  {
    printf("Invalid birth year");
  }
  else
  {
    age=b-a;
    printf("Your age is %d",age);
  }
}
