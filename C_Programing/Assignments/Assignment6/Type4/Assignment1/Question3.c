// WAP to find the year is a leap or not.
#include<stdio.h>
int isLeap();
void main()
{
	int year=2000;
	int res=isLeap(year);
	if(res==1)
		printf("%d is a leap year",year);
	else
		printf("%d is not a leap year",year);
}
int isLeap(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}
