//2.Search the given number in array.
#include<stdio.h>
void storeArray(int* ,int);
void printArray(int* ,int);
void searchArray(int* ,int);
void main()
{
	int size;
	printf("Enter the Size of the array:");
	scanf("%d",&size);
	int arr[size];
	storeArray(arr,size);
	printArray(arr,size);
	searchArray(arr,size);
	
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
void searchArray(int* arr,int size)
{
	int Ele,index=0;
	printf("\nEnter the number you want to search:");
	scanf("%d",&Ele);
	for(int i=0;i<size;i++)
	{
		if(Ele==arr[i])
		{
			index++;
			printf("Element found at index %d.",i);
			break;
		}
	}
	if(index==0)
		printf("Element not found.");
}