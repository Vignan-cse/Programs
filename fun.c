#include<stdio.h>
void change(int *num)
{
    printf("%d",*num);
    *num=*num+10;
    printf("%d\n",*num);
}
void main()
{
    int x=100;
    printf("%d\n",x);
    change(&x);
    printf("%d",x);
}