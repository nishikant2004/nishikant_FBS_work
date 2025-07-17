//Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong
#include<stdio.h>
int isArmstrong();
void main()
{
	int res=isArmstrong();	
	if(res)
		printf("Number is Armstrong number");
	else
		printf("Number is not Armstrong number");
}
int isArmstrong()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
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