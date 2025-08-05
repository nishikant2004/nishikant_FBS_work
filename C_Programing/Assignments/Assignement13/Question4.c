//4.find odd and even among the given number
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
		//printing the array elements
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	//finding the number is even or odd
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
			printf("\n %d is even",arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
			printf("\n %d is odd",arr[i]);
	}
}