#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*head,*new,*p;

void create(int n);
void insertatend(int d);
void displaylist();

int main()
{
    printf("enter total no of nodes");
    int n,d;
    scanf("%d",&n);
    create(n);
    printf("data in the list\n");
    displaylist();
    printf("enter data to insert at begini\n");
    scanf("%d",&d);
    insertatend(d);
    printf("data in the list:");
    displaylist();
}
void create(int n)
{
    int i,val;
    head=(struct node*)malloc(sizeof(struct node));
    printf("enter value of node1");
    scanf("%d",&val);
    head->data=val;
    head->next=NULL;
    p=head;
    for(i=2;i<=n;i++)
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("enter data of node %d",i);
        scanf("%d",&val);
        new->data=val;
        new->next=NULL;
        p->next=new;
        p=p->next;
    }
    printf("singly linked list created successfully\n");
}
void insertatend(int d)
{
    p=head;
    new = (struct node*)malloc(sizeof(struct node));
    new->data=d;
    new->next=NULL;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=new;
}
void displaylist()
{
    p=head;
    while(p!=NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }
}
