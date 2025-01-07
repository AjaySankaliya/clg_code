#include<stdio.h>

struct EmpDetails{
	int empid;
	char name[10];
	char designation[20];
	int salary;
};

int main(){
	struct EmpDetails e1;
	struct EmpDetails *ptr=&e1;
	
	printf("Enter empid: ");
	scanf("%d",&ptr->empid);
	printf("\nEnter empname: ");
	scanf("%s",ptr->name);
	printf("\nEnter emp designation: ");
	scanf("%s",ptr->designation);
	printf("\nEnter emp salary: ");
	scanf("%d",&ptr->salary);
	
	printf("id \tname \tdesignation \tsalary\n");
	printf("%d",ptr->empid);
	printf("\t%s",ptr->name);
	printf("\t%s",ptr->designation);
	printf("\t\t%d",ptr->salary);
	
	return 0;
}
