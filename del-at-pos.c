#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*head,*new,*prev,*p;

void create(int n);
void deleteatparticular(int pos);
void displaylist();
int main()
{
    printf("enter total no of nodes");
    int n,pos;
    scanf("%d",&n);
    create(n);
    printf("data in the list\n");
    displaylist();
    printf("enter data to deleete at middle\n");
    scanf("%d",&pos);
    deleteatparticular(pos);
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
void deleteatparticular(int pos)
{
    int i;
    prev=head;
    p=prev->next;
    for(i=2;i<=pos-1;i++)
    {
        p=p->next;
        prev=prev->next;
    }
    if(p!=NULL)
    {
        prev->next=p->next;
        free(p);
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

