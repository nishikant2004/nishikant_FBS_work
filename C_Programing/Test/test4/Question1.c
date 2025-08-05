#include<stdio.h>
void findFactor(int,int);
void main()
{
	int start,end;
	printf("Enter the starting and ending value:");
	scanf("%d%d",&start,&end);
	findFactor(start,end);
}
void findFactor(int start,int end)
{
	for(int i=start;i<=end;i++)
	{
		printf("Factor of %d=",i);
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				printf("%d,",j);
			}
		}
		printf("\n");
	}
}