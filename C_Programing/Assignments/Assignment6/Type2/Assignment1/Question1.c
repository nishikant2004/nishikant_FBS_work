//1. Write a program to check whether a number is even or odd.
#include<stdio.h>
int evenodd();
void main()
{
	int res=evenodd();
	if(res==1)
		printf("The number is even");
	else
		printf("The number is odd");
}
int evenodd()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		return 1;
	}
	else{
		return 0;
	}
}