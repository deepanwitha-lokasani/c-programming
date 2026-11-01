//A C program to read and print 2D array elements
#include<stdio.h>
void main()
{
  int a[20][20],m,n,i,j;
  printf("Enter the number of rows and columns: ");
  scanf("%d%d",&m,&n);
  printf("Enter elements of array :");
  for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }
   printf("Elements of 2D array are:\n");
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         printf("%d ",a[i][j]);
      }
      printf("\n");
   }
}
