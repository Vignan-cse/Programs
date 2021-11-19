#include<stdio.h>
int oddnumber(int a[],int n);
int main()
{
    int a[10],i,j,n,p[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]); 
    }
    for(i=0;i<n;i++)
    {
        p[i]=oddnumber(a,n);
    }
     printf("%d",p[i]);
}
int oddnumber(int a[],int n)
{
    int i,j,c;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
            if(c%2!=0)
            {
                return a[i];
            }
        }
    }
    return -1;
}