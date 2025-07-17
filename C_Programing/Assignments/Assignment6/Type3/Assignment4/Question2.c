//2. Print prime numbers in the given range 1 to n.
#include<stdio.h>
void isPrime(int n);
void main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	isPrime(n);
}
void isPrime(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		int temp=i;
		int flag=0;
		for(int j=2;j<temp;j++)
		{
			if(temp%j==0)
			{
				flag=1;
				//printf("%d is not a prime number",temp);
				break;
			}
		}
		if(flag==0)
		{
			count++;
			printf("%d is a prime number \n",temp);
		}
	}
	printf("%d numbers is prime betwenn 1 to %d ",count,n);
}