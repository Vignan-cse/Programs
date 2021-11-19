#include<stdio.h>
int main()
{
    int i,h,a,b;
    scanf("%d %d",&a,&b);
    int high=(a<b?a:b);
    for(i=1;i<=high;i++)
    {
        if(a%i==0&&b%i==0)
        {
            h=i;
            
        }
    }
    printf("%d",h);
}
