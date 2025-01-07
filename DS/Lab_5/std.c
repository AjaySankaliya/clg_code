#include<stdio.h>

struct stdDetails{
	int enrollno;
	char name[10];
	int sem;
	int cpi;
};

int main(){
	struct stdDetails s[5];
	int i;
	for(i=0;i<5;i++)
	{
	printf("Enter enrollno: ");
	scanf("%d",&s[i].enrollno);
	printf("\nEnter name: ");
	scanf("%s",s[i].name);
	printf("\nEnter std semester: ");
	scanf("%d",&s[i].sem);
	printf("\nEnter std cpi: ");
	scanf("%d",&s[i].cpi);
	
	}
	printf("enrollno \tname \tsem \tcpi\n");
	for(i=0;i<5;i++)
	{	
	printf("%d",s[i].enrollno);
	printf("\t\t%s",s[i].name);
	printf("\t%d",s[i].sem);
	printf("\t%d",s[i].cpi);
	printf("\n");
	}
	
	return 0;
}
