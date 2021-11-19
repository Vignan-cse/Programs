#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("enter values");
    scanf("%d %d",&a,&b);
    printf("beforee swapping %d %d\n",a,b);
    swap(&a,&b);
    printf("after swapping %d %d\n",a,b);//values do change after swapping
}
void swap(int*a,int *b)
{
    //int c,d;
    int t=*a;
    *a=*b;
    *b=t;
    printf("after swapping %d %d\n",*a,*b);
}