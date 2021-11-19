#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*p,*head,*new;

void create(int n);
void display();
int search(int key);
int main()
{
    int n,key;
    printf("enter no of nodes:");
    scanf("%d",&n);
    create(n);
    insertatbig()
    display();
  
void create(int n)
{
    int i,val;
    head=(struct node*)malloc(sizeof(struct node));
    printf("enter node 1:");
    scanf("%d",&val);
    head->data=val;
    head->next=NULL;
    p=head;
    for(i=2;i<=n;i++)
    {
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter node %d",i);
    scanf("%d",&val);
    new->data=val;
    new->next=NULL;
    p->next=new;
    p=p->next;
    }
    printf("sigly list created");
    
}