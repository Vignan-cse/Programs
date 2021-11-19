#include<stdio.h>
 void convert(int);
 void main()
{
    int n;
    scanf("%d",&n);
    convert(n);
}
void convert(int n)
{
    int i,r,a[10];
    for( i=0;i!=0;i++)
    {
        r=n%2;
        a[i]=r;
        n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
