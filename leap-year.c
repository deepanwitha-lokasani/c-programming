//A C program to know whether the given year is leap year or not 
#include<stdio.h>
void main()
{
  int a;
  printf("Enter the value of a: ");
  scanf("%d",&a);
  if(a%4==0|| (a % 4 == 0 && a % 100 != 0))
  {
  printf("%d is leap year",a);
  }
  else 
 { 
  printf("%d is non leap year ",a);
 }
}
