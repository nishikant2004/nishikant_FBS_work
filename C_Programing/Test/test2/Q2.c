//Que 2. WAP to check if number is positive, negative or neutral (0).
#include<stdio.h>
void main()
{
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	if(no>0)
		printf("The number is postive");
	else if(no<0)
		printf("The number is negative");
	else
		printf("The number is neutral");
}