#include<stdio.h>

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	else if(b==0){
		return a;
	}
	else if(a>b){
		return gcd(a-b,b);
	}
	else{
		return gcd(a,b-a);
	}
}

int main(){
	
	printf("gcd number is %d",gcd(40,36));
	
	return 0;
}
