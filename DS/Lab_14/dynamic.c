#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,i,n;
	printf("Enter num: ");
	scanf("%d",&n);
	
	p=(int*)malloc(n*(sizeof(int)));
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("print number:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",p[i]);
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=p[i];
	}
	printf("sum is: %d\n",sum);
	printf("average is: %d",sum/n);
	
}
