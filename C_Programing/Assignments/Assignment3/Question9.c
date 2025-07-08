//9 Check the given number is Palindrome number or not.
//Input: n = 122
//Output: Palindrome
#include<stdio.h>
void main()
{
	int n=144;
	int r1,n1,temp=n;
	int r=temp%10;
	while(temp>0)
	{
		r1=temp%10;
		n1=temp/10;
		temp=n1;
	}
	if(r1==r)
	{
		printf("the number is palindrome");
	}
	else
		printf("the number is not palindrome.");
}