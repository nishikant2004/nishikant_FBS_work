//2. Employee (id, name, salary)
#include<stdio.h>
#include<string.h>
struct Employee storeStruct();
void displayStruct(struct Employee temp);
	struct Employee{
		int id;
		char name[20];
		int salary;
	};

void main()
{
	struct Employee Emp1,Emp2,Emp3;
	
	Emp1=storeStruct();
	displayStruct(Emp1);
	
	Emp1=storeStruct();
	displayStruct(Emp1);
	
	Emp1=storeStruct();
	displayStruct(Emp1);
}
struct Employee storeStruct()
{
	struct Employee temp;
	printf("\nEnter the Id of the Employee:");
	scanf("%d",&temp.id);

	fflush(stdin);
	printf("Enter the name of the Employee:");
	//scanf("%s",&s2.name);
	gets(temp.name);
	
	printf("Enter the salary of the Employee:");
	scanf("%d",&temp.salary);
	
	return temp;
}
void displayStruct(struct Employee temp)
{
	printf("\nID = %d",temp.id);
	printf("\nName = %s",temp.name);
	printf("\nSalary = %d\n",temp.salary);
}
