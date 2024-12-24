#include<stdio.h>

int main(){
	
	
	int a,b;
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("Enter number 2: ");
	scanf("%d",&b);
	
	int i,pow=1;
	
	for(i=1;i<=b;i++){
		pow=pow*a;
	}
	
	printf("%d power is",pow);
	
	return 0;
}
