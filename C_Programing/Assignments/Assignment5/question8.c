#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=n-1;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}