//2. Create a structure Time with data members as hrs, min, sec. Accept the values of all
//these members from user and display them. Also perform addition of two time variables
//and display the result. If sec goes beyond 60, carry it to min etc. Add a method to convert
//the given time into sec.
#include<stdio.h>
typedef struct Time
{
	int hour;
	int min;
	int sec;
}Time;
Time storeStruct();
Time  formatTime(Time temp);
void displayStruct( Time temp);
int totalsec(Time t1,Time t2);
Time AddTime(Time t1,Time t2);
void main()
{
	 Time t1,t2;
	
	t1=storeStruct();
	t1=formatTime(t1);
	displayStruct(t1);
	
	t2=storeStruct();
	t2=formatTime(t2);
	displayStruct(t2);
	
	printf("\nTotal time:");
	Time totalTime=AddTime(t1,t2);
	displayStruct(totalTime);
}
 Time storeStruct()
{
	struct Time temp;
	printf("\nEnter the hour :");
	scanf("%d",&temp.hour);

	printf("\nEnter the min:");
	scanf("%d",&temp.min);
	
	printf("\nEnter the sec:");
	scanf("%d",&temp.sec);
	return temp;
}
Time  formatTime(Time temp)
{
	int totsec=(temp.hour*3600)+(temp.min*60)+temp.sec;
	temp.hour=totsec/3600; 
	temp.min=(totsec%3600)/60;
	temp.sec=totsec%60;
	return temp;
}
void displayStruct( Time temp)
{
	printf("\nHour = %d",temp.hour);
	printf("\nMin= %d",temp.min);
	printf("\nSec = %d\n",temp.sec);
}
int totsec(Time t1)
{
	int totsec=(t1.hour*3600)+(t1.min*60)+t1.sec;
	return totsec;
}
Time AddTime(Time t1,Time t2)
{
	Time temp;
	int totalsec=totsec(t1)+totsec(t2);
	temp.hour=totalsec/3600; 
	temp.min=(totalsec%3600)/60;
	temp.sec=totalsec%60;
	return temp;	
}
