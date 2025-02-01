#include<stdio.h>

#define n 10
int arr[n];
int top=-1;

void push()
{
	if(top>=n-1){
		printf("Stack Is Overflow");
	}
	else
	{
		int x;
		printf("Enter element for push: ");
		scanf("%d",&x);
		top++;
		arr[top]=x;
	}
}

void pop()
{
	if(top==-1){
		printf("stack is Underflow\n");
	}
	else
	{
		int y=arr[top];
		arr[top]='\0';
		top--;
		printf("pop element in stack is: %d\n",y);
	}
}

void peep()
{
	if(top==-1)
	{
		printf("stack is Underflow\n");
	}
	else
	{
		int i,z;
		printf("Enter index to peep element:");
		scanf("%d",&z);
		arr[top]=z;
		for(i=0;i<arr[top];i++)
		{
			
			
		}	
		printf("peep element is:%d\n",arr[top]);
	}
}

void display()
{
	int i;
	for(i=0;i<arr[top];i++)
	{
		printf("stack element is:%d\n",arr[i]);
	}
}

void main(){
	
	int c;
	while(c!=6){
		printf("1.push element\n");
		printf("2.pop element\n");
		printf("3.display element\n");
		printf("4.peep element\n");
		printf("5.change element\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
					push();
					break;
			case 2:
					pop();
					break;
			case 3:
					display();
					break;
			case 4:
					peep();
					break;
			default:
					printf("Invalid choice\n");
		}
	}
	
	
}
