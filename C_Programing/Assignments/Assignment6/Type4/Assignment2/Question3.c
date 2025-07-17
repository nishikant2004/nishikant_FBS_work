//3. Write a program to find greatest of three numbers using nested if-else.
#include<stdio.h>
int greatest(int no1,int no2,int no3);
void main()
{
	int no1,no2,no3;
	printf("Enter the numbers\n");
	scanf("%d %d %d",&no1,&no2,&no3);
	int res=greatest(no1,no2,no3);
	printf("%d is Greater",res);
}
int greatest(int no1,int no2,int no3)
{
	if(no1>no2)
	{
		if(no1>no3)
		{
			//printf("%d is Greater ",no1);
			return no1;
		}
		else
		{
			//printf("%d is Greater ",no3);
			return no3;
		}
	}
	else
	{
		if(no2>no3)
		{
			//printf("%d is Greater",no2);
			return no2;
		}
		else
		{
			//printf("%d is Greater",no3);
			return no3;
		}
	}
}