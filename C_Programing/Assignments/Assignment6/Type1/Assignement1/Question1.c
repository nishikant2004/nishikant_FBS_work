//1. Write a program to check whether a number is even or odd.
#include<stdio.h>
void evenodd();
void main()
{
	evenodd();
}
void evenodd()
{
	int n =6;
	if(n%2==0)
	{
		printf("n is even");
	}
	else{
		printf("n is odd");
	}
}