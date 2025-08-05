//6. Date (date, month, year)
#include<stdio.h>
#include<string.h>
struct Date{
	int date;
	int month;
	int year;
};
void main()
{
	struct Date d;
	d.date=12;
	d.month=8;
	d.year=2000;
	printf("%d-%d-%d",d.date,d.month,d.year);
	
	struct Date d1;
	printf("\nEnter the date :");
	scanf("%d",&d1.date);

	printf("\nEnter the month:");
	scanf("%d",&d1.month);
	
	printf("\nEnter the Year:");
	scanf("%d",&d1.year);
	
	printf("\ndate = %d",d1.date);
	printf("\nmonth = %d",d1.month);
	printf("\nyear = %d",d1.year);
	
}