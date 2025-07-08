//7. Write a C program to convert given minutes into hours and remaining minutes.
#include<stdio.h>
void main()
{
	int minutes,remaningmin,hours;
	printf("Enter the Minutes:");
	scanf("%d",&minutes);
	hours=minutes/60;
	remaningmin=minutes%60;
	
	printf("%d minutes = %d Hours and %d minutes",minutes,hours,remaningmin);
}