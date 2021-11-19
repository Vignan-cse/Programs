#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*head,*new,*p;

void create(int n);
void insertatbeg(int data);
void displaylist();
int main()
{
    printf("enter total no of nodes");
    int n,data;
    scanf("%d",&n);
    create(n);
    printf("data in the list\n");
    displaylist();
    printf("enter data to insert at begini\n");
    scanf("%d",&data);
    insertatbeg(data);
    printf("data in the list:");
    displaylist();
}
void create(int n)
{
    int i,data;
    head=(struct node*)malloc(sizeof(struct node));
    printf("enter value of node1");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    p=head;
    for(i=2;i<=n;i++)
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("enter data of node %d",i);
        scanf("%d",&data);
        new->data=data;
        new->next=NULL;
        p->next=new;
        p=p->next;
    }
    printf("singly linked list created successfully\n");
}
void insertatbeg(int data)
{
    new= (struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;
    head=new;
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
