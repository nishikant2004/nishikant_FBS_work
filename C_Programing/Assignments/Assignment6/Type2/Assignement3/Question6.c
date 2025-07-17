//6 Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect
#include<stdio.h>
int isPerfect();
void main()
{	
	int res=isPerfect();
	if(res)
		printf(" is Perfect number");
	else
		printf("is Perfect number");
}
int isPerfect()
{
	int n,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	int i=1;
	while(i<n)
	{
		if(n%i==0)
		{
			sum+=i;
		}
		i++;
	}
	if(sum==n)
		//printf("%d is Perfect number",n);
		return 1;
	else
		//printf("%d is not Perfect number",n);
		return 0;

}