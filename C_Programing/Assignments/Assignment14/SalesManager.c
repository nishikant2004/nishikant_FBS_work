//5. SalesManager (id, name, salary, incentive, target)
#include<stdio.h>
#include<string.h>
struct SalesManager
{
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
};
void main()
{
	struct SalesManager sm1;
	sm1.id=101;
	strcpy(sm1.name,"Nishikant");
	sm1.salary=50000;
	sm1.incentive=4000;
	sm1.target=500000;
	
	printf("ID = %d",sm1.id);
	printf("\nName = %s",sm1.name);
	printf("\nSalary = %d",sm1.salary);
	printf("\nincentive= %d",sm1.incentive);
	printf("\ntarget= %d",sm1.target);

	
	struct SalesManager sm2;
	
	printf("\nEnter the Id of the HR:");
	scanf("%d",&sm2.id);

	fflush(stdin);
	printf("Enter the name of the HR:");
	//scanf("%s",&s2.name);
	gets(sm2.name);
	
	printf("Enter the salary of the HR:");
	scanf("%d",&sm2.salary);
	
	printf("Enter the incentive of the HR:");
	scanf("%d",&sm2.incentive);
	
	printf("Enter the target of the HR:");
	scanf("%d",&sm2.target);
	
	printf("ID = %d",sm2.id);
	printf("\nName = %s",sm2.name);
	printf("\nSalary = %d",sm2.salary);
	printf("\nincentive= %d",sm2.incentive);
	printf("\ntarget= %d",sm2.target);	
}
