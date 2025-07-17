//9 Check the given number is Palindrome number or not.
//Input: n = 122
//Output: Palindrome
#include<stdio.h>
void isPalindrome(int *n);
void main()
{
	int n;
	printf("Enter the nunber:");
	scanf("%d",&n);
	isPalindrome(&n);
}
void isPalindrome(int *n)
{
	int r1,temp=*n,rev=0;
	int r=temp%10;
	while(temp>0)
	{
		r1=temp%10;
		rev=rev*10+r1;
		temp=temp/10;
	}
	if(rev==*n)
		printf("the number is palindrome");
	else
		printf("the number is not palindrome.");
}