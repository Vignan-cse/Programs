#include<stdio.h>
#include<math.h>
double hypo(double b,double p);
int main()
{
    double a,b,c;
    scanf("%lf%lf",&a,&b);
    c=hypo(a,b);
    printf("%.6lf",c);
}
double hypo(double b,double p)
{
    double r;
    r=hypot(b,p);
}