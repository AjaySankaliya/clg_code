#include<stdio.h>

struct complex{
	int real;
	int img;
}c1,c2,add;

void sum(){
	add.real=c1.real+c2.real;
	add.img=c1.img+c2.img;
	printf("addition of real number is %d\n",add.real);
	printf("addition of img number is %d",add.img);
}


int main()
{
	int r1,r2,i1,i2;
	printf("Enter first real number: ");
	scanf("%d",&r1);
	printf("Enter second real number: ");
	scanf("%d",&r2);
	printf("Enter first img number: ");
	scanf("%d",&i1);
	printf("Enter second img number: ");
	scanf("%d",&i2);
	
	c1.real=r1;
	c2.real=r2;
	c1.img=i1;
	c2.img=i2;
	
	sum();
	
	return 0;
}
