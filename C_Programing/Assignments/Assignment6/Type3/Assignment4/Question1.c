//1. Print armstrong numbers in the given range 1 to n.
#include<stdio.h>
void isArmstrong(int n);
void main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	isArmstrong(n);
}
void isArmstrong(int n)
{
	for(int i=1;i<=n;i++)
	{	
		int temp=i,rem,count=0,sum=0;
		while(temp>0)
		{
			count++;
			temp=temp/10;	
		}
		temp=i;
		while(temp>0)
		{
			rem=temp%10;
			int res=1;
			for(int j=1;j<=count;j++)
			{
				res=res*rem;
			}
			sum=sum+res;
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("\n %d",sum);
		}
		
	}
}
