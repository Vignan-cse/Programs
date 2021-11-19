#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node * next;
}*p,*head,*new;
    
void create(int n);
void insertatmidafter(int d,int num);
void display();

int main()
{
    int n,d,num;
    printf("enter no of nodes:");
    scanf("%d",&n);
    create(n);
     scanf("%d",&d);
     scanf("%d",&num);
    insertatmidafter(d,num);
    display();
    
}
void create(int n)
{
    int data,i;
    head=(struct node*)malloc(sizeof(struct node));
    p=head;
    printf("enter node 1:");
    scanf("%d",&data);
    head->data=data;
    head->prev=NULL;
    head->next=NULL;
    for(i=2;i<=n;i++)
    {
        printf("enter node %d",i);
         new = (struct node *)malloc(sizeof(struct node));
         scanf("%d",&data);
         new->data=data;
         new->prev=p;
         new->next=NULL;
         p->next=new;
         p=p->next;
         
    }
    
}
void insertatmidafter(int d,int num)
{
    new=(struct node*)malloc(sizeof(struct node));
    new->data=d;
    new->next=NULL;
    p=head;
    while(p->data!=num)
    {
    p=p->next;
    }
   new->next=p->next;
   new->prev=p;
   p->next=new;
   p->next->prev=new;
}
void display()
{
    p=head;
    while(p!=NULL)
    {
        printf("%d->",p->data);
    p=p->next;
    }
}

