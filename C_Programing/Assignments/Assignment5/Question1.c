//1. Print a solid square pattern
//Input: n = 4
//Output:
//
//* * * *
//* * * *
//* * * *
//* * * *
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
}