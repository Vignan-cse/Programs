#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*head,*new,*prev,*p;

void create(int n);
void deleteend(int data);
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
    deleteatend(data);
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
void deleteatend(int data)
{
    prev=head;
    p=prev->next;
    while(p->next!=NULL)
    {
        p=p->next;
        prev=prev->next;
    }
    prev->next=NULL;
    free(p);
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