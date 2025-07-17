//4 Check the given number is prime or not.
//Input: n = 7
//Output: Prime
#include<stdio.h>
int prime();
void main()
{
	int res=prime();
	if(res)
		printf("is a prime number");
	else
		printf("is not a prime number");
}
int prime()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int i=2;
	int flag=0;
	while(i<n)
	{
		if(n%i==0)
		{	
			flag=1;
			//printf("%d is not a prime number ",n);
			return 0;
			break;
		}
		i++;
		
	}
	if(flag==0)
		//printf("%d is a prime number",n);
		return 1;
}