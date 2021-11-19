#include<stdio.h>
int main()
{
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    int pos;
    scanf("%d",&pos);
    if(pos>=n+1)
    {
        printf("not posible");
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }
}