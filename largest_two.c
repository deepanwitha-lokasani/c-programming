//A C program to find largest of 2 numbers
#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter the value of a,b:\n");
  scanf("%d%d",&a,&b);
  if(a>b)
  {
  printf("%d is largest",a);
  }
  else 
 { 
  printf("%d is largest",b);
 }
}
