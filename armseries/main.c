#include<stdio.h>
int main()
{
    int i,n,r,sum,x;
    for(n=2;n<=1000;n++)
    {
        x=n;
        sum=0;
        while(x!=0)
        {
           r=x%10;
           sum=sum+r*r*r;
           x=x/10;
        }
        if(n==sum)
        {
            printf("%d\t",n);
        }
    }
}