#include<stdio.h>
#include<ctype.h>
#include<string.h>

int top=-1;
int s[100];
int op1,op2,value=0;

char pop()
{
	if(top == -1)
	{
		printf("stack is underflow");
		return '\0';
	}
	else
	{
		char x = s[top];
		s[top] = '\0';
		top--;
		return x;
	}
}

void push(char ch){
	if(top>=99){
		printf("Stack is Overflow");
	}
	else{
		top = top + 1;
		s[top]=ch;
	}
}

int ivalutepost(char op)
{
	switch(op)
	{
		case '+':
			return op1+op2;
			break;
		case '-':
			return op1-op2;
			break;
		case '*':
			return op1*op2;
			break;
		case '/':
			return op1/op2;
			break;
		case '^':
			return op1^op2;
			break;
		default:
			return 0;
	}
}

void main()
{
	char postfix[100];
	printf("enter postfix to evalute\n");
	scanf("%s",postfix);
	int i=0;
	char temp;
	while(postfix[i]!='\0')
	{
		temp=postfix[i];
		if(isdigit(temp))
		{
			push(temp);
		}
		else
		{
			char c=pop();
			op2=c-'0';
			c=pop();
			op1=c-'0';
			value=ivalutepost(temp);
			push(value + '0');
		}
		i++;
	}
	printf("%d",pop()-'0');
}





