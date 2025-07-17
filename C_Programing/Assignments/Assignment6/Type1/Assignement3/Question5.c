//Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong
#include<stdio.h>
void isArmstrong();
void main()
{
	isArmstrong();	
}
void isArmstrong()
{
	int n=153;
	int temp=n;
	int sum=0,r1;	
	while(temp>0)
	{
		r1=temp%10;
		sum+=r1*r1*r1;
		temp=temp/10;
	}
	if(sum==n)
		printf("%d is Armstrong number",n);
	else
		printf("%d not Armstrong number",n);
}