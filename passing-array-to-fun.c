#include<stdio.h>
int main()
    {
        int a[5],i,num;
        for(i=0;i<=5;i++)
        {
            scanf("%d",&a[i]);
            check(a[i]);
        }
    }
void check(int num)
    {
        if(num%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
    }
