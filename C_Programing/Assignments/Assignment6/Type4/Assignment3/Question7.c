//7 Find factorial of given number.
//Input: n = 5
//Output: 120
#include<stdio.h>
int factorial(int);
void main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int fact=factorial(n);
	printf("%d is a factorial of %d",fact,n);
}
int factorial(int n)
{
	int fact=1;
	int i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}	
	return fact;

}