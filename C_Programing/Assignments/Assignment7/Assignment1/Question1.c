//1. Write a program to check whether a number is even or odd.
#include<stdio.h>
void evenodd(int *n);
void main()
{
	int n=6;
	evenodd(&n);
	
}
void evenodd(int *n)
{
	if(*n%2==0)
	{
		printf("%d is even",*n);
	}
	else{
		printf("%d is odd",*n);
	}
}