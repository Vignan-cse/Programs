#include<stdio.h>
int areaa(int l,int b)
{
   int area=l*b;
    return area;
}
void main()
{
    int x,y,z;
    scanf("%d %d",&x,&y);
   z= areaa(x,y);
   printf("%d",z);
}