#include<stdio.h>
void leapYear(int *year);
void main()
{
	int year=2020;
	leapYear(&year);
}
void leapYear(int *year)
{
	if(*year%4==0 && *year%100!=0 || *year%400==0 ){
		printf("leap year");
	}
	else{
		printf("Not leap year");
	}
}