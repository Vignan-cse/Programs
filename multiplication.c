#include<stdio.h>
int main()
{
    int a[100],b[100],r1,c1,r2,c2,i,j,k,c[i][j];
    scanf("%d %d",&r1,&c1);
     scanf("%d %d",&r2,&c2);
     if(c2!=r1)
     {
         printf("matrix not possible");
     }
     else
     {
         for(i=0;i<r1;i++)
         {
             for(j=0;j<c1;j++)
             {
                 scanf("%d",&a[i][j]);
             }
         }
         for(i=0;i<r2;i++)
         {
             for(j=0;j<c2;j++)
             {
                 scanf("%d",&b[i][j]);
             }
         }
         int c[i][j];
         int sum=0;
         for(i=0;i<r1;i++)
         {
             for(j=0;j<c2;j++)
             {
                for(k=0;k<c2;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                c[i][j]=sum;
             }
         }
         for(i=0;i<r1;i++)
         {
             for(j=0;j<c2;j++)
             {
                 printf("%d",c[i][j]);
             }
             printf("\n");
         }
     }
}