//3. Write a program to find greatest of three numbers using nested if-else.
#include<stdio.h>
void greatest();
void main()
{
	greatest();
}
void greatest()
{
	int no1,no2,no3;
	printf("Enter the numbers\n");
	scanf("%d %d %d",&no1,&no2,&no3);
	if(no1>no2)
	{
		if(no1>no3)
		{
			printf("%d is Greater ",no1);
		}
		else
		{
			printf("%d is Greater ",no3);
		}
	}
	else
	{
		if(no2>no3)
		{
			printf("%d is Greater",no2);
		}
		else
		{
			printf("%d is Greater",no3);
		}
	}
}