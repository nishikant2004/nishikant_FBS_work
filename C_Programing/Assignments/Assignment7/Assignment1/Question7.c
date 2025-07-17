//7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respective
#include<stdio.h>
void totsalary(float *basic);
void main()
{
	float basic;
	printf("Enter the basic Salary :");
	scanf("%f",&basic);
	totsalary(&basic);
}
void totsalary(float *basic)
{
	float totsalary;
	float da,ta,hra;
	if(*basic<=5000)
	{
		da=*basic*0.10;
		ta=*basic*0.20;
		hra=*basic*0.25;
		totsalary= *basic+da+ta+hra;
		printf("%f",totsalary);
	}
	else
	{
		da=*basic*0.15;
		ta=*basic*0.25;
		hra=*basic*0.30;
		totsalary=*basic+da+ta+hra;
		printf("%f",totsalary);
	}
}