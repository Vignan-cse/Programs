#include<stdio.h>
int sum(int ,int);
int main()
{
    int a,b,total;
    scanf("%d %d",&a,&b);
    total=sum(a,b);
    printf("%d",total);
}
int sum(int a,int b)
{
    int s;
    s=a+b;
    return s;
}