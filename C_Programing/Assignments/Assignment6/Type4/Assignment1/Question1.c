#include<stdio.h>
int palindrome();
void main()
{
	int n=122;
	int res=palindrome(n);
	if(res==1)
		printf("%d is a palindrome",n);
	else
		printf("%d is not a palindrome",n);
}
	int palindrome(int no)
	{
		int r1,r2,r3;
		int no1,no2,no3;
		r1=no%10;
		no1=no/10;
		r2=no1%10;
		no2=no1/10;
		r3=no2%10;
		no3=no2/10;
		if(r1==r3)
			return 1;
		else
			return 0;
	}