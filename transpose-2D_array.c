//A C program to find transpose 2D array elements
#include<stdio.h>
void main()
{
  int a[20][20],t[20][20],m,n,i,j;
  printf("Enter the number of rows and columns: ");
  scanf("%d%d",&m,&n);
  printf("Enter elements of array a :");
  for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }
   printf("Transpose of 2D array is:\n");
   for(i=0;i<n;i++)
   {
      for(j=0;j<m;j++)
      {
         t[j][i]=a[i][j];
         printf("%d ",t[j][i]);
      }
      printf("\n");
   }
}


  
