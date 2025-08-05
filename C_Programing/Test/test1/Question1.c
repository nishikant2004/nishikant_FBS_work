#include<stdio.h>
void main()
{
	int hour,min,sec;
	printf("Enter the time1:\n");
	scanf("%d%d%d",&hour,&min,&sec);
	
	int hour2,min2,sec2;
	printf("Enter the time2:\n");
	scanf("%d%d%d",&hour2,&min2,&sec2);
	
	int totsec=hour*60*60+min*60+sec;
	printf("total sec= %d\n",totsec);
	
	int totsec2=hour2*60*60+min2*60+sec2;
	printf("total sec= %d\n",totsec2);
	
	if(totsec>totsec2)
	{
		printf("time 1 is greater:");
		int def=totsec-totsec2;
		printf("By %d sec",def);
	}
	else
	{
		printf("time 2 is greater:");
		int def=totsec2-totsec;
		int min=def/60;
		int hour=min/60;
		int remMin=min%60;
		printf("%d hour\n",hour);
		printf("%d min \n",min);
		printf("By %d sec\n",def);
	}
}