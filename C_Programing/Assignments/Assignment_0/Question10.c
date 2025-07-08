//10. Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.
#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5;
	float obtmarks;
	float percentage;
	int maxmarks=500;
	printf("Enter the marks of five subjects");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	obtmarks=s1+s2+s3+s4+s5;
	percentage=(obtmarks/maxmarks)*100;
	printf("Total marks=%f and Percentage=%f",obtmarks,percentage);
}