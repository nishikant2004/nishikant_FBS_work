//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
#include<stdio.h>
void Operation(int *no1,int *no2,char *opt);
void main()
{
	int no1,no2;
	char opt;
	printf(" Enter the number: \n");
	scanf("%d %d",&no1,&no2);
	printf("Enter the operator: \n");
	fflush(stdin);
	scanf("%c",&opt);
	Operation(&no1,&no2,&opt);
}
void Operation(int *no1,int *no2,char *opt)
{
	int result;
	if(*opt=='+')
	{
		result=*no1+*no2;
	}
	else if(*opt=='-')
	{
		result=*no1-*no2;
	}
	else if(*opt=='*')
	{
		result=*no1 * *no2;
	}
	else if(*opt=='/')
	{
		result=*no1 / *no2;
	}
	else if(*opt=='%')
	{
		result=*no1 % *no2;
	}
	printf("Result of the Operation: %d ",result);
}