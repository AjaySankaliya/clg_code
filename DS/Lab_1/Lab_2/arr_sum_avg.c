#include<stdio.h>

void main(){
	
	int n,i;

	
	int sum=0;
	int avg;
	
	
	printf("Enter number of array elament: ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("Enter element of array: ");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		printf("%d \n",arr[i]);
	}
	
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	
	printf("sum of array element is: %d ",sum);
	
	avg=sum/n;
	
	printf("\n");
	printf("avg of array element is: %d",avg);
	
}
