#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};

struct node *first;

void Insert_first(int x)
{
	if(first==NULL)
	{
		first=(struct node*)malloc(sizeof(struct node*));
		first->data=x;
		first->next=NULL;
	}
	else
	{
		struct node *newnode=malloc(sizeof(struct node*));
		newnode->data=x;
		newnode->next=first;
		first=newnode;
	}
}

void display()
{
	struct node *temp;
	temp=first;
	if(first==NULL)
	{
		printf("empty list");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}

void main()
{
	int n,n1;
	while(n!=3)
	{
	printf("1.Insert first\n");
	printf("2.Display\n");
	scanf("%d",&n);	
	switch(n)
	{
		case 1:
			printf("Enter number for add in first\n");
			scanf("%d",&n1);
			Insert_first(n1);
			break;
		case 2:
			display();
			break;
		default:
			printf("case have not found");
			
	}
	}
}
