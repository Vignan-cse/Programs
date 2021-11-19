#include<stdio.h>
int main()
{
    int a[10],n,i,j,key;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
    }
    while(j>=0&&a[j]>key)
    {
           a[j+1]=a[j];
           j=j-1;
    }
    a[j+1]=key;
  for(i=0;i<n-1;i++)
  {
      printf("%d\n",a[i]);
  }
}
