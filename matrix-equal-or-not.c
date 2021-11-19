#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10][10],b[10][10],i,j,r1,c1,r2,c2,flag=1;
    scanf("%d %d",&r1,&c1);
    scanf("%d %d",&r2,&c2);
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
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    if(r1==c1&&r2==c2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                if(a[i][j]!=b[i][j])
                {
                    flag=0;
                    break;
                }
            }
        }
    }
    else
    {
        printf("matrix cannot be compared");
        exit(1);
    }
    if(flag==1)
    {
        printf("two matrices are equal");
    }else
    {
        printf("not equal");
    }
    
}