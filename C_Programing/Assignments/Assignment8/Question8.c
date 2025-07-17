//merge two arrays
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array1 elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int brr[n];
	printf("Enter the array2 elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&brr[i]);
	}
	//merge two arrays
	int crr[n*2];
	for(int i=0;i<n;i++)
	{
		crr[i]=arr[i];
	}
	for(int i=0;i<n;i++)
	{
		crr[n+i]=brr[i];
	}
	printf("merged array = ");
	for(int i=0;i<n*2;i++)
	{
		printf("%d ",crr[i]);
	}
}