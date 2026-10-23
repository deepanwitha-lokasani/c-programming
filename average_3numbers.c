//A C program to find average of 3 numbers
#include<stdio.h>
void main()
{
  int a,b,c;
  float avg;
  printf("Enter the value of a,b,c:\n");
  scanf("%d%d%d",&a,&b,&c);
  avg=(a+b+c)/3.0;
  printf("Your average value is %f",avg);

}
