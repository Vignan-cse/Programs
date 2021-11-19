#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   int n,i;
   float *el;
   scanf("%d",&n);
   el=(float*)calloc(n,sizeof(float));
   printf("enter elemnts:");
   for(i=0;i<n;i++)
   {
       scanf("%f",el+i);
   }
   for(i=0;i<n;i++)
   {
       if(*(el)<*(el+i))
       {
           *(el)=*(el+i);
       }
   }
   printf("%f",*el);
}