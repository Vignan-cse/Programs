#include<stdio.h>
int main()
{
    int i,n,num,sum=0,r;
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(num==sum)
    {
        printf("arm");
    }
    else
    {
        {
            printf("not");
        }
    }
}
