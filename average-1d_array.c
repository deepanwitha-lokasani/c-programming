//A C program to find average of array elements
#include<stdio.h>
void main()
{
  int a[100],i,n,sum=0,average=0;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  printf("Enter array elements:");
  for(i=0;i<n;i++)
  { 
  scanf("%d",&a[i]);
  sum=sum+a[i];
  average=sum/n;
  }
  
  {
  printf("Average of array elements=%d",average);
  }
}
