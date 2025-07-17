//5. Write a program to check whether a person is eligible to vote (age = 18).
#include<stdio.h>
int eligible();
void main()
{
	int res=eligible();
	if(res==1)
		printf("you are eligible");
	else
		printf("you are not eligible");
}
int eligible()
{
	int age;
	printf("Enter the nuber:");
	scanf("%d",&age);
	if(age>=18)
		return 1;	
	else
		return 0;
}