#include<stdio.h>
#include<conio.h>
#define SIZE 10
void push();
void pop();
void display();
    int stack[SIZE];
    int top=-1;
    void main()
    {
      int ch;
      while(1)
      {
          printf("\n 1.push");
           printf("\n 2.pop");
            printf("\n 3.display");
             printf("\n 4.quit");
          scanf("%d",&ch);
          switch(ch)
          {
              case 1:push();
              break;
              case 2:pop();
              break;
              case 3:display();
              break;
              case 4:exit(1);
              default: printf("invalid choice");
          }
      }
    }
    void push()
    {
        int item;
        if(top==SIZE-1)
        printf("stack overflow");
        else
        {
            printf("inserted element is:");
            scanf("%d",&item);
            top=top+1;
            stack[top]=item;
        }
    }
    void pop()
    {
        if(top=-1)
            printf("stack underflow");
            else
            printf("deleted item is %d",stack[top]);
            top=top-1;
    }
    void display()
    {
        int i;
        if (top=-1)
        {
            printf("stack is empty");
        }
        else
        printf("stack elemnts are");
        for(i=top;i>=0;i--)
        {
            printf("%d",stack[i]);
        }
    }
    