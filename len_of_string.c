#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,c=0;
    char ch[50];
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        c++;
    }
    printf("%d",c);
}