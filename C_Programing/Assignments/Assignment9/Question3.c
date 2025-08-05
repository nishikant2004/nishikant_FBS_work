//3.find sum of all the number in array.
#include<stdio.h>
void storeArray(int* ,int);
void printArray(int* ,int);
void findSumArray(int* ,int);
void main()
{
	int size;
	printf("Enter the Size of the array:");
	scanf("%d",&size);
	int arr[size];
	storeArray(arr,size);
	printArray(arr,size);
	findSumArray(arr,size);
}
void storeArray(int* arr,int size)
{
	printf("Enter the element for the array:");
	for(int i=0;i<size;i++)
	{
		scanf("\n%d",&arr[i]);
	}
}
void printArray(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void findSumArray(int* arr,int size)
{
	//finding sum
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	printf("\nSum of all the number in array:%d",sum);
}