//1 Print numbers from 1 to 10
//Output: 1 2 3 4 5 6 7 8 9 10
#include<stdio.h>
void numbers(int no);
void main()
{
	int no=10;
	numbers(no);	
}
void numbers(int no)
{
		int i=1;
		while(i<=no)
		{
			printf("%d ",i);
			i++;
		}
}