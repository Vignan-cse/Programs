#include<stdio.h>
int main()
{
    int n,a[10],pos,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&pos);
   for(i=pos-1;i<n-1;i++)
   {
       if(pos-1>n+1)
       {
           printf("del not");
       }
       else
       {
       a[i]=a[i+1];
       }
   }
   for(i=0;i<n-1;i++)
   {
       printf("%d",a[i]);
   }
}