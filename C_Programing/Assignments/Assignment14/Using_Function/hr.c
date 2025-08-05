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
struct HR storeStruct();
void displayStruct(struct HR temp);
void main()
{
	struct HR hr1,hr2,hr3;
	hr1=storeStruct();
	displayStruct(hr1);
	
	hr2=storeStruct();
	displayStruct(hr2);
	
	hr3=storeStruct();
	displayStruct(hr3);
	
}
struct HR storeStruct()
{
	struct HR temp;
	printf("\nEnter the Id of the Employee:");
	scanf("%d",&temp.id);

	fflush(stdin);
	printf("Enter the name of the Employee:");
	//scanf("%s",&s2.name);
	gets(temp.name);
	
	printf("Enter the salary of the Employee:");
	scanf("%d",&temp.salary);
	
	printf("Enter the Commission of the Employee:");
	scanf("%d",&temp.commission);	
	return temp;
}
void displayStruct(struct HR temp)
{
	printf("\nID = %d",temp.id);
	printf("\nName = %s",temp.name);
	printf("\nSalary = %d",temp.salary);
	printf("\ncommission= %d\n",temp.commission);
}