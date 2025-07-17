#include<stdio.h>
int leapYear();
void main()
{
	int res=leapYear();
	if(res==1)
		printf("leap year");
	else
		printf("Not leap year");
		
}
int leapYear()
{
	int year;
	printf("Enter the number:");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}