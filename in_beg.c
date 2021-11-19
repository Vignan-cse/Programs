#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
void createlist(int n);
void atbegin(int data);
void display();
int main()
{
    int n,data;
    scanf("%d",&n);
    createlist(n);
    display();
    scanf("%d",&data);
    atbegin(data);
    display();
}
void createlist(int n)
{
    int data,i,*head,*temp,*new;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("unable to allocate memory");
    }
    else
    {
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
  for(i=2;i<n;i++)
  {
      new=(struct node*)malloc(sizeof(struct node));
      if(new==NULL)
      {
          printf("unable to allocate memory");
          break;
      }
      else
      {
          printf("enter the data node:%d",i);
      scanf("%d",&data);
      new->data=data;
      new->next=NULL;
      temp->next=new;
      temp=temp->next;
      }
  }
    printf("singly linked list created successfully");
    }
}
void atbegin(int data)
{
    stuct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("unable to allocate memory");
    }
    else
    {
        new->data=data;
        new->next=head;
        head=new;
    }
}
void displaylist()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    temp=head;
    while(temp!=NULL)
    {
        printf("data=%d,temp->data);
        temp=tem->next;
    }
}