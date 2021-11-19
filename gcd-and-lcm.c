/*#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int g=gcd(a,b);
    printf("gcd of %d %d is %d",a,b,g);
}
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return (gcd(b,a%b));
    }
}*/
/*#include<stdio.h>
int main()
{
    int a,b,min;
    scanf("%d %d",&a,&b);
    min=(a>b)?a:b;
    while(1)
    {
        if(min%a==0 && min%b==0 )
        {
            printf("%d",min);
            break;
        }
        min++;
    }
}*/
#include<stdio.h>
int main()
{
    int n1,n2,num,den,rem,gcd,lcm;
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        num=n1;
        den=n2;
    }
    else
    {
        num=n2;
        den=n2;
    }
    rem=num%den;
    while(rem!=0)
    {
        num=den;
        den=rem;
        rem=num%den;
    }
    gcd=den;
    lcm=(n1*n2)/gcd;
    printf("%d %d",gcd,lcm);
}










