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
	
	for(i=n-1;i>=0;i--){
		printf("%d \n",arr[i]);
	}
	
	return 0;
}