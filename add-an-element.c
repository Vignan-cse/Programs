#include<stdio.h>
int main()
{
    int n,a[10],pos,val,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&pos);
    scanf("%d",&val);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
        a[pos-1]=val;
    }
    for(i=0;i<n+1;i++)
    {
        printf("%d",a[i]);
    }
}