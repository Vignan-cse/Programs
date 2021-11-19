#include<stdio.h>
int main()
{
    int i,a,b,h,hcf;
    scanf("%d %d",&a,&b);
    h=(a<b)?a:b;
    for(i=1;i<=h;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    printf("%d",hcf);
}
