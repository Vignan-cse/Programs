#include<stdio.h>
void checksum(int a[10],int n,int sum);
int main()
{
    int a[10],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
    int sum;
    scanf("%d",&sum);
    checksum(a,n,sum);
    return 0;
}
void checksum(int a[10],int n,int sum)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                printf("%d %d",i,j);
                return ;
            }
        }
    }
}