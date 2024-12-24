#include<stdio.h>

int main(){

	int n,fact=1;
    printf("Enter number");
    scanf("%d",&n);
	
	int i;
	for(i=n;i>=1;i--){
		fact=fact*i;
	}
	
	printf("%d factorial is",fact);

    return 0;
}
