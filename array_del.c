#include<stdio.h>
int main()
{
    int a[6],i,n,pos;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&pos);
    if(pos>=n+1)
    {
        printf("del not possible");
    }
    else
    {
    for(i=pos-1;i<n-1;i++)
    {
       a[i]=a[i+1]; 
    }
    }
    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }
}