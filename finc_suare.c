#include<stdio.h>
double square(double n);
int main()
{
    int n;
    scanf("%d",&n);
    double ans=square(n);
    printf("%.2f",ans);
}
double square(double n)
{
    return (n*n);
}
