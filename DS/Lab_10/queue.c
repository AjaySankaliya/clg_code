#include<stdio.h>

#define N 100
int queue[N],F=-1,R=-1;


void enqueue()
{	
	if(R>=N-1)
	{
		printf("overflow");
	}
	else
	{
		int num;
		printf("Enter number for add in queue:");
		scanf("%d",&num);
		R=R+1;
		queue[R]=num;
	}
	if(F == -1)
	{
		F=0;
	}
}

void dequeue()
{
	if(F==-1)
	{
		printf("underflow");	
	}	
	else
	{
		int y=queue[F];
		queue[F]='\0';
		if(F==0 || R==0)
		{
			F==-1;
			R==-1;
		}
		else
		{
			F=F+1;
		}
	}
}

void display()
{
	int i;
	for(i=F;i<=R;i++)
	{
		printf("number is %d \n",queue[i]);
	}
}

void main()
{
	int c;
	while(c!=4)
	{
		printf("1.EnQueue\n");
		printf("2.DeQueue\n");
		printf("3.display\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			default:
				printf("invalid case\n");	
		}
	}
}
