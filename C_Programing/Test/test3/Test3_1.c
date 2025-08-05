//WAP to print even and odd numbers in a given range.
#include<stdio.h>
int isEven(int,int);
int isOdd(int,int);
void main()
{
	int choice;
	printf("Enter 1 for Even and 2 for Odd :");
	scanf("%d",&choice);
	int n1,n2;
	printf("Enter the range no1:\n");
	scanf("%d",&n1);
	printf("Enter the range no2:\n");
	scanf("%d",&n2);
	if(choice==1)
		isEven(n1,n2);
	else if(choice==2)
		isOdd(n1,n2);
}
int isEven(int n1,int n2)
{
	for(int i=n1;i<=n2;i++)
	{
		if(i%2==0)
		{
			printf("%d is even \n",i);
		}
	}
}
int isOdd(int n1,int n2)
{
	for(int i=n1;i<=n2;i++)
	{
		if(i%2!=0)
		{
			printf("%d is odd \n",i);
		}
	}
}
