#include<stdio.h>
int main()
{
    int *p;
    int x=10;
    p=&x;
    *p=5;
    printf("%d",*p);
}