//3 Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15
#include<stdio.h>
void sumofnumbers(int no);
void main()
{
	int no;
	printf("Enter the number :");
	scanf("%d",&no);
	sumofnumbers(no);
}
void sumofnumbers(int no)
{
	int i=1;
	int sum=0;
	
	while(i<=no)
	{
		sum=sum+i;
		i++;
	}
	printf("%d is a sum",sum);
}