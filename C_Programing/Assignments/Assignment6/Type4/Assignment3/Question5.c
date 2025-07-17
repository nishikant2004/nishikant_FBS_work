//Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong
#include<stdio.h>
int isArmstrong(int n);
void main()
{
	int n=153;
	int res=isArmstrong(n);
	if(res==1)
		printf("%d is  a armstrong number",n);
	else
		printf("%d is not a armstrong number",n);
}
int isArmstrong(int n)
{
	int temp=n;
	int sum=0,r1;	
	while(temp>0)
	{
		r1=temp%10;
		sum+=r1*r1*r1;
		temp=temp/10;
	}
	if(sum==n)
		//printf("%d is Armstrong number",n);
		return 1;
	else
		//printf("%d not Armstrong number",n);
		return 0;
}