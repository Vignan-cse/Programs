#include<stdio.h>
int main()
{
    int i,j,t,a[100],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        t=a[i];
        for(j=i;j>=0&&t<a[j-1];j--)
        {
            a[j]=a[j-1];
        }
        a[j]=t;
    }
     for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}