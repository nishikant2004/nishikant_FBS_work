//8 Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong
//A number is called a Strong Number if:
//
//sum of factorial of digits = original number
#include<stdio.h>
int isStrong(int );
void main()
{
	int n=145;
	int res=isStrong(n);
	if(res)
		printf("%d is a strong number",n);
	else
		printf("%d is not a strong number",n);
}
int isStrong(int n)
	{
	int fact=1,sum=0,i=1;
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
		sum+=fact;
		temp=temp/10;
	}
	if(n==sum)
		return 1;
	else
		return 0;
	}
