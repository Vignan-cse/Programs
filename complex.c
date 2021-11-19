#include<stdio.h>
struct complex{
    int real,img;
};
int main()
{
    struct complex a1,b1,a2,b2,c1,c2;
    scanf("%d",&a1.real);
    scanf("%d",&b1.img);
    printf("\n");
     scanf("%d",&a2.real);
    scanf("%d",&b2.img);
    c1.real=a1.real+a2.real;
    c2.img=b1.img+b2.img;
    printf("%d+i%d",c1.real,c2.img);
    
}