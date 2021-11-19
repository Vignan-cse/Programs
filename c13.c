#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,sum=0,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
}

