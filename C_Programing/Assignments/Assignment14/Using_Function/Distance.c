//Distance ( feet, inch)
#include<stdio.h>
struct Distance
{
	int feet;
	float inch;
};
void main()
{
	struct Distance d1;
	
	d1.feet=23;
	d1.inch=43;
	
	printf("distance= %dfeet %finch.",d1.feet,d1.inch);
	
	struct Distance d2;
	
	printf("\nEnter the feet:");
	scanf("%d",&d2.feet);
	
	printf("\nEnter the inch:");
	scanf("%f",&d2.inch);
	
	printf("\ndistance= %dfeet %finch.",d2.feet,d2.inch);
}