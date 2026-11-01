//A C program to find sum of 2D array elements
#include<stdio.h>
void main()
{
  int a[20][20],b[20][20],c[20][20],m,n,i,j;
  printf("Enter the number of rows and columns: ");
  scanf("%d%d",&m,&n);
  printf("Enter elements of array a :");
  for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }
   printf("Enter array elements of b :");
   for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
      {
         scanf("%d",&b[i][j]);
      }
   }
   printf("Sum of 2D array is:\n");
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         c[i][j]=a[i][j]+b[i][j];
         printf("%d ",c[i][j]);
      }
      printf("\n");
   }
}
