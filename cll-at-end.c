#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node * next;
}*head,*new,*p;

void create(int n);
void displaylist();
void insertatend(int d);
void displaylist();

int main()
{
    printf("enter total no of nodes");
    int n,d;
    scanf("%d",&n);
    create(n);
    scanf("%d",&d);
    insertatend( d);
    printf("data in the list\n");
    displaylist();
}
void create(int n)
{
    int val ,i;
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
        p=new;
        p->next=head;
    }
    printf("circular linked list created successfully\n");
}
void insertatend(int d)
{
    new=(struct node *)malloc(sizeof(struct node));
    new->data=d;
    p=head;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=new;
    new->next=head;
}
void displaylist()
{
    p=head;
    printf("data in list");
    do{
        printf("%d->",p->data);
        p=p->next;
    }
    while(p!=head);
    
}

