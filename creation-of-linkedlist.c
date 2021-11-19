#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*newnode,*head;
void create()
{
    int val,i;
    head=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    scanf("%d",&val);
    head->data=val;
    head->next=NULL;
    for(i=0;i<4;i++)
    {
        int i;
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&val);
        newnode->data=val;
        newnode->next=NULL;
        p->next=newnode;
        p=p->next;
    }
}
void main()
{
    create();
    struct node*p=head;
    while(p!=NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }
}
