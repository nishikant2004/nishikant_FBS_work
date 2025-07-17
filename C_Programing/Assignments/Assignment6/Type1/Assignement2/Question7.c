//7. Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include<stdio.h>
void Checkage();
void main()
{
	Checkage();
}
void Checkage()
{
		int age;
	printf("Enter the age of a person :");
	scanf("%d",&age);
	if(age<12)
	{
		printf("person is child ");
	}
	else if(age>=12 && age<=19)
	{
		printf("person is Teenager ");
	}
	else if(age>=20 && age<=59)
	{
		printf("person is Adult ");
	}
	else if(age>=60)
	{
		printf("person is Senior ");
	}
}