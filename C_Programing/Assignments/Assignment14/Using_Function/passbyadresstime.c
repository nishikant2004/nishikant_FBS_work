//by passing address of the structure and variables
#include<stdio.h>
typedef struct Time
{
	int hour;
	int min;
	int sec;
} Time ;
void storeStruct(Time*);
void formatTime(Time*);
void displayStruct(Time*);
void main()
{
	struct Time t1,t2,t3;
	
	storeStruct(&t1);
	formatTime(&t1);
	displayStruct(&t1);
	
	storeStruct(&t2);
	formatTime(&t2);
	displayStruct(&t2);
	
	storeStruct(&t3);
	formatTime(&t3);
	displayStruct(&t3);
}
void  storeStruct(Time* temp)
{
	printf("\nEnter the hour :");
	scanf("%d",&temp->hour);

	printf("\nEnter the min:");
	scanf("%d",&temp->min);
	
	printf("\nEnter the sec:");
	scanf("%d",&temp->sec);

}
void  formatTime(Time* temp)
{
	int totsec=(temp->hour*3600)+(temp->min*60)+temp->sec;
	temp->hour=totsec/3600; 
	temp->min=(totsec%3600)/60;
	temp->sec=totsec%60;
}
void displayStruct(Time* temp)
{
	printf("\nHour = %d",temp->hour);
	printf("\nMin= %d",temp->min);
	printf("\nSec = %d\n",temp->sec);
}
