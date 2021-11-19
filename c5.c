#include<stdio.h>
int main()
{
    char c;
    char s[50],sen[100];
    scanf("%c",&c);
    scanf("%s\n",s);
    scanf("%[^\n]",sen);
    printf("%c\n",c);
    printf("%s\n",s);
    printf("%s",sen);
    
}