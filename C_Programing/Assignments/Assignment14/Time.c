//7. Time (hour, min, sec)
#include<stdio.h>
struct Time
{
	int hour;
	int min;
	int sec;
};
void main()
{
	struct Time t1;
	t1.hour=3;
	t1.min=35;
	t1.sec=34;
	
	printf("%dhr-%dmin-%dsec",t1.hour,t1.min,t1.sec);
	
	struct Time t2;
	printf("\nEnter the hour :");
	scanf("%d",&t2.hour);

	printf("\nEnter the min:");
	scanf("%d",&t2.min);
	
	printf("\nEnter the sec:");
	scanf("%d",&t2.sec);
	int totsec=(t2.hour*3600)+(t2.min*60)+t2.sec;
	t2.hour=totsec/3600;
	t2.min=(totsec%3600)/60;
	t2.sec=totsec%60;
	
	printf("\nhour = %d",t2.hour);
	printf("\nmin = %d",t2.min);
	printf("\nsec = %d",t2.sec);
	
	printf("\n%dhr-%dmin-%dsec",t2.hour,t2.min,t2.sec);
	
}