//5. Write a menu driven program to take a number for user and perform operations as follows.
//
//Press 1.To check number is even or odd.
//2.To check number is prime or not.
//3.To check number is pallindrome or not.
//4.To check number is positive, negative or zero.
//5.To reverse a number.
//6.To find sum of digits.
#include<stdio.h>
void main()
{
	int no;
	printf("Enter the Number for Operation: ");
	scanf("%d",&no);
	if(no==1)
	{
		int n;
		printf("Enter the Number:");
		scanf("%d",&n);
		if(n%2==0)
		{
			printf("%d is even number",n);
		}
		else
		{
			printf("%d is odd number",n);
		}	
	}
	else if(no==2)
		{
		int n;
		printf("Enter the Number:");
		scanf("%d",&n);
		int flag=0;
		for(int i=2;i<n;i++)
		{
			if(i%10==0)
			{
				flag=1;
				printf("The Number is not a prime number");
				break;
			}
		}
		if(flag==0)
		{
			printf("%d is a prime number",n);
		}
	}
	else if(no==3)
	{
		int n,temp,rem,rev=0;
		printf("Enter the number:");
		scanf("%d",&n);
		temp=n;
		while(temp!=0)
		{
			rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		if(n==rev)
		{
			printf("%d is a palindrome number",n);
		}
		else
		{
			printf("%d is not a palindrome number",n);
		}
	}
	else if(no==4)
	{	
		int n;
		printf("Enter the number:");
		scanf("%d",&n);
		if(n>0)
		{
			printf("%d is a positive number",n);
		}
		else if(n<0)
		{
			printf("%d is a negative number",n);
		}
		else
		{
			printf("%d is zero",n);
		}
	}
	else if(no==5)
	{
		int n,rev;
		printf("Enter the number:");
		scanf("%d",&n);
		while(n!=0)
		{	
			int rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		printf("%d is a reverse of the number",rev);
		
	}
	else if(no==6)
	{
		int n,sum=0;
		printf("Enter the number:");
		scanf("%d",&n);
		while(n!=0)
		{
			int rem=n%10;
			sum=sum+rem;
			n=n/10;
		}
		printf("%d is a sum of the digits",sum);
	}
	
}