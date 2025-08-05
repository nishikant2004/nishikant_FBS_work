//4. HR (id, name, salary, commission)
#include<stdio.h>
#include<string.h>
struct HR
{
	int id;
	char name[20];
	int salary;
	int commission;
};
void main()
{
	struct HR hr1;
	hr1.id=101;
	strcpy(hr1.name,"Nishikant");
	hr1.salary=50000;
	hr1.commission;
	
	printf("ID = %d",hr1.id);
	printf("\nName = %s",hr1.name);
	printf("\nSalary = %d",hr1.salary);
	printf("\ncommission= %d",hr1.commission);

	
	struct HR hr2;
	
	printf("\nEnter the Id of the HR:");
	scanf("%d",&hr2.id);

	fflush(stdin);
	printf("Enter the name of the HR:");
	//scanf("%s",&s2.name);
	gets(hr2.name);
	
	printf("Enter the salary of the HR:");
	scanf("%d",&hr2.salary);
	
	printf("Enter the commission of the HR:");
	scanf("%d",&hr2.commission);
	
	printf("ID = %d",hr2.id);
	printf("\nName = %s",hr2.name);
	printf("\nSalary = %d",hr2.salary);
	printf("\ncommission= %d",hr2.commission);
}
