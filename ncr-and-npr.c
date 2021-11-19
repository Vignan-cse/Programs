#include<stdio.h>
long find_ncr(int n,int r);
long find_npr(int n,int r);
long fact(int n);
int main()
{
    int n,r;
    scanf("%d",&n);
    scanf("%d",&r);
    int ncr=find_ncr(n,r);
   int  npr=find_npr(n,r);
    printf("%d\n",ncr);
     printf("%d\n",npr);
     return 0;
}
long find_ncr(int n,int r)
{
    long res;
    res=fact(n)/(fact(r)*fact(n-r));
}
long find_npr(int n,int r)
{
    long res;
    res=fact(n)/fact(n-r);
}
long fact(int n)
{
    int i;
    long f=1;
    for(i=0;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}