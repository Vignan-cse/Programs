#include<stdio.h>
void main()
{
	int n,i,flag=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			flag++;
		}
	}
	if(flag==1)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("Not a prime number");
	}
}