//1.Find the maximum and minimum number in the array.
#include<stdio.h>
void storeArray(int* ,int);
void printArray(int* ,int);
void findmaxmin(int* ,int);
void main()
{
	int size;
	printf("Enter the Size of the array:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array elements:");
	storeArray(arr,size);
	printArray(arr,size);
	findmaxmin(arr,size);
}
void storeArray(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void printArray(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void findmaxmin(int* arr,int size)
{
	int max=arr[0],min=arr[0];
	for(int i=1;i<size;i++)
	{	
		if(max<arr[i])
			max=arr[i];
		if(min>arr[i])
			min=arr[i];
	}
	printf("\n%d is maximum and %d is minimum.",max,min);
	
}