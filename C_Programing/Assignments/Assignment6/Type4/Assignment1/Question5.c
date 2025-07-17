#include<stdio.h>
int isAdult();
void main()
{
	int age=10;
	int res=isAdult(age);
	if(res==1)
		printf("You are adult");
	else
		printf("You are not adult");
}
int isAdult(int age)
{
	if(age>=18)
		return 1;
	else
		return 0;
}