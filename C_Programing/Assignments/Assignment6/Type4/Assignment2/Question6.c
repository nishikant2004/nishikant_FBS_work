//6. Accept a number and check if it is divisible by 3, 5, or both.
//(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
//both" or” Divisible by None”)
#include<stdio.h>
int isDivisible(int no);
void main()
{
	int no;
	printf("Enter the number :");
	scanf("%d",&no);
	int res=isDivisible(no);
	if(res==0)
		printf("Divisible by both");
	else if(res==1)
		printf("Divisible by 3 but not by 5");
	else if(res==2)
		printf("Divisible by 5 but not by 3");
	else if(res==3)
		printf("Divisible by none");		
}
int isDivisible(int no)
{
	if(no%3==0 && no%5==0)
	{
		//printf(" Divisible by both");
		return 0;
	}
	else if(no%3==0)
	{
		//printf("Divisible by 3 but not by 5");
		return 1;
	}
	else if(no%5==0)
	{
		//printf("Divisible by 5 but not by 3 ");
		return 2;
	}
	else
		return 3;
}