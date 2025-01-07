#include<stdio.h>

struct EmpDetails{
	int empid;
	char name[10];
	char designation[20];
	int salary;
};

int main(){
	struct EmpDetails e1;
	
	printf("Enter empid: ");
	scanf("%d",&e1.empid);
	printf("\nEnter empname: ");
	scanf("%s",e1.name);
	printf("\nEnter emp designation: ");
	scanf("%s",e1.designation);
	printf("\nEnter emp salary: ");
	scanf("%d",&e1.salary);
	
	printf("id \tname \tdesignation \tsalary\n");
	printf("%d",e1.empid);
	printf("\t%s",e1.name);
	printf("\t%s",e1.designation);
	printf("\t\t%d",e1.salary);
	
	return 0;
}
