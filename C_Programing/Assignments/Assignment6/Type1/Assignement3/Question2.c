//2 Print table for given number.
//Input: n = 5
//Output: 5 10 15 20 25 30 35 40 45 50
#include<stdio.h>
void table();
void main()
{
	table();
}
void table()
{
	int n=5;
	int i=1;
	while(i<=10)
	{
		int no=n*i;
		printf("%d ",no);
		i++;
	}
}