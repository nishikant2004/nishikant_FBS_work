//5. Print an inverted pyramid pattern
//Input: n = 5
//Output:
//
//*****
//****
//***
//**
//*
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			printf(" ");
		}
		for(int k=n;k>=i;k--)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
}