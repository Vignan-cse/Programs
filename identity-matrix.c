#include<stdio.h>
int main()
{
    int a[10][10],i,j,flag=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]!=1&&a[j][i]!=0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("matrix is identity matrix");
    }
}