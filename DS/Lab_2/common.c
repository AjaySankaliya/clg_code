#include<stdio.h>

int main(){
	
	int i,n1;
	
	printf("Enter number of first array elament: ");
	scanf("%d",&n1);
	
	int a[n1];
	
	for(i=0;i<n1;i++){
		printf("Enter element of array: ");
		scanf("%d",&a[i]);
	}
	
	int n2,j;
	
	printf("Enter number of second array elament: ");
	scanf("%d",&n2);
	
	int b[n2];
	
	for(j=0;j<n2;j++){
		printf("Enter element of array: ");
		scanf("%d",&b[j]);
	}
	
	
	int arr[50];
	int c;
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(a[i]==b[j]){
				printf("%d \n",a[i]);
			}
		}
	}
	
	
	return 0;
	
}
