#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
void insertsort(int a[],int n)
{
int i=0,j;
	for(i=1;i<n;i++)
	{
		for(j=i;j>0;j--)
		{
			if(a[j-1]>a[j])
			swap(&a[j-1],&a[j]);
			else 
			break;
		}
	}
	
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
}
int main()
{
	printf("The number of elemnts do you need----->\n");
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		a[i]=rand()%10;
	}
	printf("The Elementd are\n");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("\n");
	clock_t t1,t2;
	t1=clock();
	insertsort(a,n);
	t2=clock();
	double total;
	total=(double)(t2-t1)/60;
	print(a,n);
	printf("The time taken is %1f",total);
	return 0;
}
