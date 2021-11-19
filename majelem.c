#include<stdio.h>
 void majele(int a[10],int n);
int main()
{
    int a[10],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    majele(a,n);
    return 0;
}
void majele(int a[10],int n)
{
    int maxc=0,c,index=-1,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c=0;
            if(a[i]==a[j])
            {
                c++;
            }
        }
            if(c>maxc)
            {
                maxc=c;
                index=i;
            }
    }
    if(maxc>n/2)
    {
        printf("maj ele is %d",a[i]);
    }
    else
    {
        printf("not found");
    }
}