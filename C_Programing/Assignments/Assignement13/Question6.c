//6.Accept array and print only prime numbers from an array.
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int* arr=(int*)malloc(sizeof(int)*n);
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//printing prime numbers.

	for(int i=0;i<n;i++)
	{
		int temp=arr[i];
		int isprime=0;
		for(int j=2;j<temp;j++)
		{
			if(temp%j==0)
			{
				isprime=1;
				break;
			}
		}
		if(isprime==0)
			printf("%d ",temp);
	}
}