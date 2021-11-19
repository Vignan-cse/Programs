#include<stdio.h>
int main()
{
    int j,i,temp,a[100],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&n);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i;j>0&&temp<a[j-1];j--)
        {
            a[j]=a[j-1];
        }
        a[j]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
