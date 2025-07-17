//8 Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong
//A number is called a Strong Number if:
//
//sum of factorial of digits = original number
#include<stdio.h>
void isStrong();
void main()
{
	isStrong();
}
void isStrong()
	{
	int n=145,fact=1,sum=0,i=1;
	int temp=n,digit;
	while(temp>0)
	{
		digit=temp%10;
	//	printf("%d is digit\n",digit);
		fact=1,i=1;
		while(i<=digit)
		{
			fact=fact*i;
			i++;
		}
	//	printf("%d is fact\n ",fact);
		sum+=fact;
	//	printf("%d is sum\n",sum);
		temp=temp/10;
	//	printf("%d is temp \n",temp);
	}
	if(n==sum)
		printf("%d is a strong number",n);
	else
		printf("%d is not a strong number",n);
	}
