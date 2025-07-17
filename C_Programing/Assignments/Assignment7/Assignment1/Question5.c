//5. Write a program to check whether a person is eligible to vote (age = 18).
#include<stdio.h>
void eligible(int *age);
void main()
{
	int age=20;
	eligible(&age);
}
void eligible(int *age)
{
	if(*age>=18){
		printf(" you are eligible");
	}	
	else
	{
		printf("you are not eligible");
	}
}