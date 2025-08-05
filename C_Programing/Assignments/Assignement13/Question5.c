//5.print alternate elements in array.
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("Enter the Size of the array:");
	scanf("%d",&n);
	//int arr[n];
	int* arr=(int*)malloc(sizeof(int)*n);
	printf("Enter the array elements:");
	//taking array input
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i+=2)
	{
		printf("%d ",arr[i]);
	}
}