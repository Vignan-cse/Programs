#include<stdio.h>
int main()
{
    int i,key,a[100],n,found=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("%d found at %d nd position",key,i);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("not found");
    }
}