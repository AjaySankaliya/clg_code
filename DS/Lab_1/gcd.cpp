#include<stdio.h>

int main(){
	
	int a,b;
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("Enter number 2: ");
	scanf("%d",&b);
	
	int i,gcd=1;
	
	for(i=2;i<=a;i++){
		while((a%i==0) && (b%i==0)){
			gcd=gcd*i;
			a=a/i;
			b=b/i;
		}
	}
	
	
	printf("gcd number is %d",gcd);
	
	return 0;
}
