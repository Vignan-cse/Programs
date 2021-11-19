#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node * next;
}*p,*head,*new;
    
void create(int n);
void deleteatbig(int d);
void display();

int main()
{
    int n,d;
    printf("enter no of nodes:");
    scanf("%d",&n);
    create(n);
     scanf("%d",&d);
    deleteatbig(d);
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
void deleteatbig(int d)
{
    p=head;
    head=head->next;
    head->prev=NULL;
   free(p);
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



