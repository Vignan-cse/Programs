#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node *head=NULL;
void insert()
{
    int val;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
    head=newnode;
    }
    else
    newnode->next=head;
}
void display()
{
    struct node *newnode;
    newnode=head;
    while(newnode!=NULL)
    {
        printf("%d->",newnode->data);
        newnode=newnode->next;
    }
    printf("\n");
}
int main()
{
    char ch;
    do
    {
    insert();
    display();
    printf("do u want to enter new node?");
    ch =getch();
    }
    while(ch!='n');
    getch();
}
   
