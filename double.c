#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*new,*head,*p;
void create()
{
    int item,i;
    struct node*p;
    head=(struct node*)malloc(sizeof(struct node));
    p=head;
    scanf("%d",&item);
    head->data=item;
    head->prev=NULL;
    head->next=NULL;
    for(int i=0;i<4;i++)
    {
        if(i==0)
        {
            new=(struct node*)malloc(sizeof(struct node));
            new->data=item;
            new->next=NULL;
            new->prev=head;
            p->next=new;
            p=p->next;
        }
        else
        {
            new=(struct node*)malloc(sizeof(struct node));
            new->prev=p;
            new->data=item;
            new->next=NULL;
            p->next=NULL;
            p=p->next;
        }
    }
}
    void print()
    {
        p=head;
        while(p!=NULL)
        {
            printf("%d",p->data);
        }
    }
    void main()
    {
        create();
        print();
    }
    
    
    
    
    
    
    
