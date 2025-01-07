#include<stdio.h>

int main(){
	
	int i,n;
	
	printf("Enter number of array elament: ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter element of array: ");
		scanf("%d",&a[i]);
	}
	
	int b[50];
	
	for(i=0;i<n;i++){
		
		b[i]=a[i];
	}
	
	for(i=0;i<n;i++){
		printf("array of b %d \n",b[i]);
	}
	
	return 0;
}
