#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *first;
struct node *last;

//insert last
void enqueue(int x) 
{	
	if(first==NULL)
	{
		first=(struct node*)malloc(sizeof(struct node*));
		first->data=x;
		first->next=NULL;
	}
	else 
	{
		struct node *temp;
		temp=first;
		struct node * newnode=malloc(sizeof(struct node*));
		while(temp->next!=NULL)
		{
			temp=temp->next;	
		}
		temp->next=newnode;
		newnode->data=x;
		newnode->next=NULL;
	}
}

//delete first
void dequeue()
{
	struct node *temp;
	temp=first;
	if(first==NULL)
	{
		printf("stack is underflow\n");
	}
	else
	{
		struct node * newnode=malloc(sizeof(struct node*));
		newnode=first->next;
		first=newnode;
	}
}

void middle()
{
	struct node *temp;
	temp=first;
	if(first==NULL)
	{
		printf("stack is underflow\n");
	}
	else
	{
		int count=0;
		while(temp!=NULL)
		{
			temp=temp->next;
			count++;
		}
		printf("count: %d\n",count);
		int middle=(count-1)/2;
		printf("middle num: %d\n",middle);
		
		temp=first;
		
		int i;
		for(i=0;i<middle;i++)
		{
			temp=temp->next;
		}
		
		printf("%d\n",temp->data);
	}
}

void display()
{
	struct node *temp;
	temp=first;
	if(first==NULL)
	{
		printf("stack is underflow\n");
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
	while(n!=5)
	{
	printf("1.Insert last\n");
	printf("2.Delete first\n");
	printf("3.Display\n");
	printf("4.Middle\n");
	scanf("%d",&n);	
	switch(n)
	{
		case 1:
			printf("Enter number for add in first\n");
			scanf("%d",&n1);
			enqueue(n1);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			middle();
			break;
		default:
			printf("case have not found\n");
			
	}
}
}

