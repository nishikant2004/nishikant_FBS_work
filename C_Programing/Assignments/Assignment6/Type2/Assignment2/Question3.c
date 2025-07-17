//3. Write a program to find greatest of three numbers using nested if-else.
#include<stdio.h>
int greatest();
void main()
{
	int res=greatest();
	printf("%d is Greater ",res);
	
}
int greatest()
{
	int no1,no2,no3;
	printf("Enter the numbers\n");
	scanf("%d %d %d",&no1,&no2,&no3);
	if(no1>no2)
	{
		if(no1>no3)
			return no1;
		else
			return no3;
	}
	else
	{
		if(no2>no3)
			return no2;
		else
			return no3;
	}
}