#include<stdio.h>
# define MAX 50
int main()
{
    int i,j;
    int a[MAX][MAX];
    int aro,acol;
    printf("enter rows and columns of mat a");
    scanf("%d %d",&aro,&acol);
    printf("enter matrix a elemnts:");
    for(i=0;i<aro;i++)
    {
        for(j=0;j<acol;i++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[MAX][MAX];
    int bro,bcol;
    printf("enter rows and columns of mat b");
    scanf("%d %d",&bro,&bcol);
    if(bro!=acol)
    {
        printf("sorry multiplication not possible");
    }
    else{
    printf("enter matrix b elemnts:");
    for(i=0;i<bro;i++)
    {
        for(j=0;j<bcol;i++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int product[MAX][MAX];
    int sum=0,k;
    for(i=0;i<aro;i++)
    {
        for(j=0;j<bcol;j++)
        {
            for(k=0;k<bro;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
        }
    }
    }
}