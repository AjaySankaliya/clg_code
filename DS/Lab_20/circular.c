#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};

struct node *first,*last;

void circular_first(int x)
{
	struct node *newnode=malloc(sizeof(struct node *));
	newnode->data=x;
	if(first==NULL)
	{
		newnode->next=newnode;
		first=last=newnode;
	}
	else
	{
		newnode->next=first;
		last->next=newnode;
		first=newnode;
	}
}

void circular_last(int x)
{
	struct node *newnode=malloc(sizeof(struct node *));
	newnode->data=x;
	if(first==NULL)
	{
		newnode->next=newnode;
		first=last=newnode;
	}
	else
	{
		last->next=newnode;
		newnode->next=first;
		last=newnode;
	}
}

void delete_first()
{
	struct node *temp=first;
	if(first==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		if(first==last)
		{
			first=last=NULL;
		}
		else
		{
			last->next=first->next;
			first=first->next;
		}
		free(temp);
	}
}

void delete_last()
{
	struct node *temp;
	if(first==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		if(first==last)
		{
			first=last=NULL;
		}
		else
		{
			temp=first;
			while((temp->next)!=last)
			{
				temp=temp->next;
			}
			temp->next=first;
			last=temp;
		}
	}
}

void display()
{
	struct node * temp=first;
	while(temp!=last)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("%d\n",temp->data);
}

void count()
{
	struct node * temp=first;
	int count=1;
	while(temp!=last)
	{
		temp=temp->next;
		count++;
	}
	printf("no. of node : %d\n",count);
}


void main()
{
	int n,n1;
	while(n!=7)
	{
		printf("1.Insert first\n");
		printf("2.Insert last\n");
		printf("3.Delete first\n");
		printf("4.Delele last\n");
		printf("5.Display\n");
		printf("6.count\n");
		printf("7.Exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("Enter number for add first in circular linkedlist\n");
				scanf("%d",&n1);
				circular_first(n1);
				break;
			case 2:
				printf("Enter number for add last in circular linkedlist\n");
				scanf("%d",&n1);
				circular_last(n1);
				break;
			case 3:
				delete_first();
				break;
			case 4:
				delete_last();
				break;
			case 5:
				printf("display number\n");
				display();
				break;
			case 6:
				count();
				break;
			default:
				printf("Invalid choice\n");
		}
	}
	
}
