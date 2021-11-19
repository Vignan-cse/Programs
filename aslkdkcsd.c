#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void bubblesort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1])
            }
        }
    }
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
void main()
{
    printf("enter the elements you want to print.....");
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=rand()%10;
    }
    printf("the elemnts are....")
    for(i=0;i<n;i++)
        printf("%d",a[i]);
        printf("\n");
        double total;
        clock t1,t2;
        t1=clock();
        bubblesort(a,n);
        t2=clock();
        total=(double)(t2-t1)/CLOCKS_PER_SEC;
        printf("the sorted array is.......");
        printf(a,n);
        printf("the time taken is ....\n%1f",total);
}
    