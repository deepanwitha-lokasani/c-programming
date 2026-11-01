//A C program to find even and odd numbers in an array 
#include<stdio.h>
void main()
{
  int a[100],i,n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  printf("Enter array elements:");
  for(i=0;i<n;i++)
 { 
  scanf("%d",&a[i]);
  
  if(a[i]%2==0)
  {
  printf("Even number is %d ",a[i]);
  }
  else
  {
    printf("Odd number is %d ",a[i]);
  }
 }
}
