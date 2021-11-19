#include<stdio.h>
int main()
{
    int a[10],i=0,b[10],c[10],j=0,k=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    printf("even numbrs are:\n");
    for(i=0;i<j;i++)
    {
        printf("%d",b[i]);
    }
       printf("\nodd numbers are:\n");
    for(i=0;i<k;i++)
    {
        printf("%d",c[i]);
    }
}