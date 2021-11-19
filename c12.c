#include<stdio.h>
int main()
{
    int ar[10]={0};
    int n;
    scanf("%d",&n);
    int rem;
    while(n>0)
    {
        rem=n%10;
        if(ar[rem]==1)
            break;
        ar[rem]=1;
        n=n/10;
    }
    if(n>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}