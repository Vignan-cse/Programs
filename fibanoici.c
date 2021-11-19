#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    scanf("%d",&n);
    while(a<n)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
    
}