//7. Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include<stdio.h>
char Checkage();
void main()
{
	char res=Checkage();
	if(res=='c')
		printf("person is Child ");
	else if(res=='t')
		printf("person is Teenager ");
	else if(res=='a')
		printf("person is Adult ");
	else if(res=='s')
	printf("person is Senior ");
}
char Checkage()
{
	int age;
	printf("Enter the age of a person :");
	scanf("%d",&age);
	if(age<12)
	{
		//printf("person is child ");
		return 'c';
	}
	else if(age>=12 && age<=19)
	{
		//printf("person is Teenager ");
		return 't';
	}
	else if(age>=20 && age<=59)
	{
		//printf("person is Adult ");
		return 'a';
		
	}
	else if(age>=60)
	{
		//printf("person is Senior ");
		return 's';
	}
}