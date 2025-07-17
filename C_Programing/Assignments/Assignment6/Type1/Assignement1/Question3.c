#include<stdio.h>
void leapYear();
void main()
{
	leapYear();
}
void leapYear()
{
	int year=2021;
	if(year%4==0 && year%100!=0 || year%400==0 ){
		printf("leap year");
	}
	else{
		printf("Not leap year");
	}
}