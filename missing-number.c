#include<stdio.h>
int missnumber(int a[],int n);
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
        printf("%d",a[i]);
    }
    printf("\n");
    printf("%d",missnumber(a,n));
}
int missnumber(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return (n*(n+1)/2-sum);
}
