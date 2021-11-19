#include<stdio.h>
int largestsum(int a[],int n);
int main()
{
    int a[10],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    printf("%d",largestsum(a,n));
    return 0;
}
int largestsum(int a[],int n)
{
    int i,j,k,sum,maxsum=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            sum=0;
            for(k=i;k<j;k++)
            {
                sum=sum+a[k];
            }
            if(sum>maxsum)
            {
                maxsum=sum;
            }
        }
    }
    return maxsum;
}