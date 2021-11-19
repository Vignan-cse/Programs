#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*head,*new,*p,*prev;

void create(int n);
void insertatmid(int d,int pos);
void displaylist();

int main()
{
    printf("enter total no of nodes");
    int n,d,pos;
    scanf("%d",&n);
    create(n);
    printf("data in the list\n");
    displaylist();
    printf("enter data to insert at mid1 after given node\n");
    scanf("%d",&d);
    scanf("%d",&pos);
    insertatmid(d,pos);
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
void insertatmid(int d,int pos)
{
    int i;
    new= (struct node*)malloc(sizeof(struct node));
    new->data=d;
    new->next=NULL;
    p=head;
    for(i=2;i<=pos-1;i++)
    {
        p=p->next;
    }
    if(p!=NULL)
    {
        new->next=p->next;
        p->next=new;
         
    }
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
