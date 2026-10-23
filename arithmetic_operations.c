//A C program to perform arithmetic operations on 2 numbers 
#include<stdio.h>
void main()
{
  int a,b,sum,sub,mul,div;
  
  printf("Enter the value of a,b:\n");
  scanf("%d%d",&a,&b);
  sum=a+b;
  printf("Sum=%d\n",sum);
  sub=a-b;
  printf("Sub=%d\n",sub);
  mul=a*b;
  printf("Mul=%d\n",mul);
  div=a/b;
  printf("Div=%d\n",div);

}
