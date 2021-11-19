

#include<stdio.h>
int main()
{
      int a,b,i=1,x,min;
      printf("Enter Two Numbers To Find H.C.F\n");
      printf("---------------------------\n");
      printf("Enter First Number  : ");
      scanf("%d", &a);
      printf("\nEnter Second Number : ");
      scanf("%d",&b);
      min=(a<b)?a:b;
      while(i<=min)
      {
            if(a%i==0 && b%i==0)
                  x=i;
            i++;
      }
      printf("---------------------------\n");
      printf("H.C.F of %d & %d : %d",a,b,x);
      return 0;
}
