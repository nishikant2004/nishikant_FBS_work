//2. Employee (id, name, salary)
#include<stdio.h>
#include<string.h>
	struct Employee{
		int id;
		char name[20];
		int salary;
	};

void main()
{
	struct Employee Emp;
	Emp.id=101;
	strcpy(Emp.name,"Nishikant");
	Emp.salary=50000;
	
	printf("ID = %d",Emp.id);
	printf("\nName = %s",Emp.name);
	printf("\nSalary = %d",Emp.salary);
	
	struct Employee Emp1;
	
	printf("\nEnter the Id of the Employee:");
	scanf("%d",&Emp1.id);

	fflush(stdin);
	printf("Enter the name of the Employee:");
	//scanf("%s",&s2.name);
	gets(Emp1.name);
	
	printf("Enter the salary of the Employee:");
	scanf("%d",&Emp1.salary);
	
	printf("ID = %d",Emp1.id);
	printf("\nName = %s",Emp1.name);
	printf("\nSalary = %d",Emp1.salary);
}
