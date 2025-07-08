//10 Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)
#include<stdio.h>
void main()
{
	int n=423458;
	int r=n%10;
	int r1,n1,temp=n;
	while(temp>10)
	{
		r1=temp%10;
		n1=temp/10;
		temp=n1;
	}
	int sum=temp+r;
	printf("sum is %d",sum);
}