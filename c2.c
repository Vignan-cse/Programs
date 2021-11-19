#include <stdio.h>
int max_of_four(int a,int b,int c,int d)
{
    int res;
    if(a>b&&a>c&&a>d)
    {
         res=a;
    }
    else if(b>c&&b>a&&b>d)
    {
        res=b;
    }
    else if(c>a&&c>b&&c>d)
    {
        res=c;
    }
    else if(d>a&&d>b&&d>c)
    {
        res=d;
    }
    return res;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
}
