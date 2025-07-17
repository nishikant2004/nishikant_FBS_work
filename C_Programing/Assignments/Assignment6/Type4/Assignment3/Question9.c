//9 Check the given number is Palindrome number or not.
//Input: n = 122
//Output: Palindrome
#include<stdio.h>
int isPalindrome(int);
void main()
{
	int n;
	printf("Enter the nunber:");
	scanf("%d",&n);
	int res=isPalindrome(n);
	if(res)
		printf("the number is palindrome");
	else
		printf("the number is not palindrome.");
}
int isPalindrome(int n)
{
	int r1,temp=n,rev=0;
	int r=temp%10;
	while(temp>0)
	{
		r1=temp%10;
		rev=rev*10+r1;
		temp=temp/10;
	}
	if(rev==n)
		return 1;
	else
		return 0;
}