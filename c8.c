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
    }
    int l=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
        }
    }
    printf("%d",l);
}
