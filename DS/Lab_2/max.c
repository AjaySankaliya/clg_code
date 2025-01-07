#include<stdio.h>

int main(){
		
	int i,n;
		
	printf("Enter number of array elament: ");
	scanf("%d",&n);
	
	int arr[n];
	
	
	for(i=0;i<n;i++){
		printf("Enter element of array: ");
		scanf("%d",&arr[i]);
	}

	int largest=arr[0];
	
	for(i=0;i<n;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	
	
	printf("largest element is %d",largest);
	
	
	return 0;
}
