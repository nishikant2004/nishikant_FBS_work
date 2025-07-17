//2. Write a program to check given 3 digit number is pallindrome or not.
#include<stdio.h>
int palindrome();
void main()
{	
	int res=palindrome();
	if(res==1)
		printf("The number is a palindrome");
	else
		printf("The number is not a palindrome");
			
}
int palindrome()
{
	int no;
	printf("Enter a no :");
	scanf("%d",&no);
	int r1,r2,r3;
	int no1,no2,no3;
	r1=no%10;
	no1=no/10;
	r2=no1%10;
	no2=no1/10;
	r3=no2%10;
	no3=no2/10;
//	int rev=r1*100+r2*10+r3*1;
//	if(no==rev)
//		printf("The number is a palindrome");
//	else
//		printf("The number is not a palindrome");
	if(r1==r3)
		return 1;
	else
		return 0;
}