//4. pyramid pattern
//Input: n = 5
//Output:
//*
//**
//***
//****
//*****
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
}