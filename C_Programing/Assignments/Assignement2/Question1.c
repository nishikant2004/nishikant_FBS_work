//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
#include<stdio.h>
void main()
{
	int no1,no2;
	char opt;
	int result;
	printf(" Enter the number: \n");
	scanf("%d %d",&no1,&no2);
	printf("Enter the operator: \n");
	fflush(stdin);
	scanf("%c",&opt);
	if(opt=='+')
	{
		result=no1+no2;
	}
	else if(opt=='-')
	{
		result=no1-no2;
	}
	else if(opt=='*')
	{
		result=no1*no2;
	}
	else if(opt=='/')
	{
		result=no1/no2;
	}
	else if(opt=='%')
	{
		result=no1%no2;
	}
	printf("Result of the Operation: %d ",result);
	
}