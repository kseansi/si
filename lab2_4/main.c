#include <stdio.h>
#include <coniow.h>
#define n 2
int main () {
   int A[2*n][2*n],
      B1[n][n],
      B2[n][n],
      B3[n][n],
      B4[n][n];
   int i,j,k,m;
   clrscr();
   printf("Original array\n");
   
   for (i=0;i<2*n;i++){
      for(j=0;j<2*n;j++){
         printf("A[%d][%d] = ",i,j);
         scanf("%d",&A[i][j]);
      }
      printf("\n");
   }
   
        for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                        B1[i][j]=A[i][j];
 
        for(i=0;i<n;i++)
                for(j=n,m=0;j<2*n;j++,m++)
                        B2[i][m]=A[i][j];
 
        for(i=n,k=0;i<2*n;i++,k++)
                for(j=n,m=0;j<2*n;j++,m++)
                        B3[k][m]=A[i][j];
 
        for(i=n,k=0;i<2*n;i++,k++)
                for(j=0;j<n;j++)
                        B4[k][j]=A[i][j];

        for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                        A[i][j]=B4[i][j];
 
        for(i=0;i<n;i++)
                for(j=n,k=0;j<2*n;j++,k++)
                        A[i][j]=B1[i][k];
 
        for(i=n,k=0;i<2*n;i++,k++)
                for(j=n,m=0;j<2*n;j++,m++)
                        A[i][j]=B2[k][m];
 
        for(i=n,k=0;i<2*n;i++,k++)
                for(j=0;j<n;j++)
                        A[i][j]=B3[k][j];
 
        printf("\nRearranged array\n");
        for(i=0;i<2*n;i++)
        {       for(j=0;j<2*n;j++)
                        printf("%d   ",A[i][j]);
                printf("\n");
        }
 
 getchar();
}