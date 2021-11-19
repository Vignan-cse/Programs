//bubble sort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void bubsort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void main()
{
	printf("Number of element do u want to print----------->\n");
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=rand()%10;
    }
    printf("The elements are------>");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
    double total;
    clock_t t1,t2;
    t1=clock();
    bubsort(a,n);
    t2=clock();
    total=(double)(t2-t1)/CLOCKS_PER_SEC;
    printf("The sorted array is ---------->\n");
    print(a,n);
	printf("The time taken is------------>\n%1f",total);
}




