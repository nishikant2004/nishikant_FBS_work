//6. Accept a number and check if it is divisible by 3, 5, or both.
//(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
//both" or” Divisible by None”)
#include<stdio.h>
void main()
{
	int no;
	printf("Enter the number :");
	scanf("%d",&no);
	if(no%3==0 && no%5==0)
	{
		printf(" Divisible by both");
	}
	else if(no%3==0)
	{
		printf("Divisible by 3 but not by 5");
	}
	else if(no%5==0)
	{
		printf("Divisible by 5 but not by 3 ");
	}
}