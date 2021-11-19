#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *pre;
	int data;
	struct node *nxt;
}*p,*head,*newnode;
void create(int n)
{
	head=(struct node*)malloc(sizeof(struct node));
	p=head;
	int v,i;
	scanf("%d",&v);
	head->data=v;
	head->nxt=NULL;
	head->pre=NULL;
	for(i=0;i<n-1;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&v);
		newnode->data=v;
		newnode->pre=p;
		newnode->nxt=NULL;
		p->nxt=newnode;
		p=p->nxt;
	}
	
}
void print()
{
	p=head;
	while(p!=NULL)
	{
		printf("%d->",p->data);
		p=p->nxt;
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	create(a);
	print();
	return 0;
}
