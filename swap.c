//A C program to swap two numbers
#include<stdio.h>
void main()
{
  
  int a,b,temp;
  printf("Enter the value of a,b:\n");
  scanf("%d%d",&a,&b);
  
  temp=a;
  a=b;
  b=temp;
  printf("The value of a,b are:%d %d\n",a,b);
 
}
