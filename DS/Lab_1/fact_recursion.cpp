#include<stdio.h>

int fact(int n){
	if(n==1){
		return 1;
	}
	else{
		return n * fact(n-1);
	}
}

int main(){
	printf("factorial is %d",fact(7));
	return 0;
}
