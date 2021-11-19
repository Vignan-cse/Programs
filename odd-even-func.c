#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   if(check(n))
   {
       printf("odd");
   }
   else
   {
       printf("even");
   }
}
int check(int n)
{
    return(n&1);
}
   