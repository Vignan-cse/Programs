#include<stdio.h>
struct emp{
    char *name;
    int age;
    float sal;
}e1,e2;
int manager()
{
    struct {
        char *name;
        int sal;
    }man;
   man.sal=20;
   if(man.sal>30)
   {
       printf("ok");
   }
   else
   {
       printf("no");
   }
}
int main()
{
    scanf("%d %d",&e1.age,&e2.age);
    printf("%d %d",e1.age,e2.age);
    printf("%d",manager());
}