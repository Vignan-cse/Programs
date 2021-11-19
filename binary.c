#include<stdio.h>
int main()
{
    int i,mid,n,key,a[100],found=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=0,h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        scanf("%d",&key);
        if(key>a[mid])
        {
            h=mid-1;
        }
        else if(key<a[mid])
        {
            l=mid+1;
        }
        else if(key==a[mid])
        {
            printf("%d found at location %d",key,mid);
            found=1;
            break;
        }
    if(found==0)
    {
        printf("not found");
    }
    }
}
