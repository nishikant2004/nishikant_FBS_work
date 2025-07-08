#include<stdio.h>
void main()
{
	int no1,no2,no3,no4,no5;
	printf("Enter Numbers:");
	scanf("%d %d %d %d %d",&no1,&no2,&no3,&no4,&no5);
	int sum=no1+no2+no3+no4+no5;
	int Average=sum/5;
	printf("Average of 5 Numbers=%d",Average);
}	