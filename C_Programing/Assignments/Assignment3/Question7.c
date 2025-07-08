//7 Find factorial of given number.
//Input: n = 5
//Output: 120
#include<stdio.h>
void main()
{
	int n,fact=1;
	printf("enter the number:");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("%d is a factorial of %d",fact,n);
}