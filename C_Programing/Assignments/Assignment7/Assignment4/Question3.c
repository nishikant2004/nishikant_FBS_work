//3. Print perfect numbers in the given range 1 to n.
//A perfect number is a positive integer that is equal to the sum of its proper positive divisors, excluding itself.
#include<stdio.h>
void perfect(int *n);
void main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	perfect(&n);
}
void perfect(int *n)
{
	int sum,count=0,temp;
	for(int i=1;i<=*n;i++)
	{
		temp=i;
		sum=0;
		for(int j=1;j<temp;j++)
		{
			if(temp%j==0)
			{
				sum+=j;
			}
		}
		if(sum==temp)
		{
			count++;
			printf("%d is a perfect number \n",temp);
		}
	}
	printf("%d perfect nunbers between 1 to %d \n",count,*n);
}