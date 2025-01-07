#include<stdio.h>

int main(){
	
	int n,i;
	
	printf("Enter number of array elament: ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("Enter element of array: ");
		scanf("%d",&arr[i]);
	}
	
	int num1,num2;
	
	printf("Enter number for replace: ");
	scanf("%d",&num1);
	printf("Enter new number you have replace it: ");
	scanf("%d",&num2);
	
	for(i=0;i<n;i++){
		if(arr[i]==num1){
			arr[i]=num2;
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
	
	return 0;
}
