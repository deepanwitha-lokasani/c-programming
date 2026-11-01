//A C program to to print array elements in reverse order
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
  }
  printf("Array elements in reverse order:");
  for(i=n-1;i>=0;i--)
  {
    printf("%d ",a[i]);
  }
}
