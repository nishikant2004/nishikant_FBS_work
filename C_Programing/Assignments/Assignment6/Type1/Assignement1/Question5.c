//5. Write a program to check whether a person is eligible to vote (age = 18).
#include<stdio.h>
void eligible();
void main()
{
	eligible();
}
void eligible()
{
	int age=10;
	if(age>=18){
		printf(" you are eligible");
	}	
	else
	{
		printf("you are not eligible");
	}
}