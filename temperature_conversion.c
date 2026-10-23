//A C program to convert Celsius to Fahrenheit
#include<stdio.h>
void main()
{
  int C,F;
  printf("Enter the teperature in Celsius:");
  scanf("%d",&C);
  F=(9*C/5)+32;
  printf("The temperature in fahrenheit is %d",F);
}
