//2. WAP to add alternate numbers from given range.
//eg. i/p: start= 1, end= 5
//o/p: sum= 9
#include<stdio.h>
void main()
{
	int start;
	printf("Enter the value of start:");
	scanf("%d",&start);
	
	int end;
	printf("Enter the value of End:");
	scanf("%d",&end);
	int sum=0;
	for(int i=start;i<=end;i=i+2)
	{
		sum+=i;
	}
	printf("Sum of alternate numbers:%d",sum);
}