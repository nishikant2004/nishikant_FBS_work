//6. Accept a number and check if it is divisible by 3, 5, or both.
//(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
//both" or” Divisible by None”)
#include<stdio.h>
int isDivisible();
void main()
{
	int res=isDivisible();
	if(res==35)
		printf(" Divisible by both");
	else if(res==3)
		printf("Divisible by 3 but not by 5");
	else if(res==5)
		printf("Divisible by 5 but not by 3 ");
		
}
int1 isDivisible()
{
	int no;
	printf("Enter the number :");
	scanf("%d",&no);
	if(no%3==0 && no%5==0)
	{
		//printf(" Divisible by both");
		return 35;
	}
	else if(no%3==0)
	{
		//printf("Divisible by 3 but not by 5");
		return 3;
	}
	else if(no%5==0)
	{
		//printf("Divisible by 5 but not by 3 ");
		return 5;
	}
}