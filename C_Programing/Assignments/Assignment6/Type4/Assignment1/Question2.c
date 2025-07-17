#include<stdio.h>
int isEven();
void main()
{
	int no=1;
	int res=isEven(no);
	if(res==1)
		printf("%d is a even number",no);
	else
		printf("%d is an odd number",no);
}
int isEven(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}