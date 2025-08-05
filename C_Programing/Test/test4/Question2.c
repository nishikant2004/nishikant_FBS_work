//2.write a program to find power of any number eg.2^4=16
#include<stdio.h>
void findPower(int ,int);
void main()
{
	int n,power;
	printf("Enter the value of n and power:");
	scanf("%d%d",&n,&power);
	findPower(n,power);
}
void findPower(int n,int power)
{
	int ans=1;
	for(int i=1;i<=power;i++)
	{
		ans=ans*n;
	}
	printf("power of the number:%d",ans);
}