#include<stdio.h>
#include<string.h>
//3. Admin (id, name, salary, allowance)
struct Admin
{
	int id;
	char name[20];
	int salary;
	int allowance;
};
void main()
{
	struct Admin Adm1;
	Adm1.id=101;
	strcpy(Adm1.name,"Nishikant");
	Adm1.salary=50000;
	Adm1.allowance=3000;
	
	printf("ID = %d",Adm1.id);
	printf("\nName = %s",Adm1.name);
	printf("\nSalary = %d",Adm1.salary);
	printf("\nAllownace =%d",Adm1.allowance);

	
	struct Admin adm2;
	
	printf("\nEnter the Id of the Admin:");
	scanf("%d",&adm2.id);

	fflush(stdin);
	printf("Enter the name of the Admin:");
	//scanf("%s",&s2.name);
	gets(adm2.name);
	
	printf("Enter the Salary of the Admin:");
	scanf("%d",&adm2.salary);
	
	printf("Enter the Allowance of the Admin:");
	scanf("%d",&adm2.allowance);
	
	printf("ID = %d",adm2.id);
	printf("\nName = %s",adm2.name);
	printf("\nSalary = %d",adm2.salary);
	printf("\nAllownace =%d",adm2.allowance);
}
