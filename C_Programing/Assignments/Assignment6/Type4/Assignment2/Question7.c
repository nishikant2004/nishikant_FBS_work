//7. Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include<stdio.h>
char Checkage(int age);
void main()
{
	int age;
	printf("Enter the age of a person :");
	scanf("%d",&age);
	char res=Checkage(age);
	if(res=='C')
		printf("person is child ");
	else if(res=='T')
		printf("person is Teenager ");
	else if(res=='A')
		printf("person is Adult ");
	else if(res=='S')
		printf("person is Semior ");
	
}
char Checkage(int age)
{
	if(age<12)
	{
	//	printf("person is child ");
		return 'C';
	}
	else if(age>=12 && age<=19)
	{
	//	printf("person is Teenager ");
		return 'T';
	}
	else if(age>=20 && age<=59)
	{
	//	printf("person is Adult ");
		return 'A';
	}
	else if(age>=60)
	{
	//	printf("person is Senior ");
		return 'S';
	}
}