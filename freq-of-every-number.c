#include<stdio.h>
int main()
{
    int i,j,a[10],b[10],n,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        if(a[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                    a[j]=-1;
                }
            }
        b[i]=c;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            printf("%d %d",a[i],b[i]);
        }
    }
    
}