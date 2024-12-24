#include<stdio.h>

int main(){
	
	int i,n;
	printf("Enter number for factor:");
	scanf("%d",&n);
	
	bool isPrime=true;
	for(i=2;i<n;i++){
		if(n%i==0){
			isPrime=false;
			break;
		}
		else{
			isPrime=true;
		}
	}
	
	if(isPrime==true){
		printf("number is prime");
	}
	else{
		printf("number is not prime");
	}
	return 0;
}
