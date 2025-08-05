//reverse Array.
#include<stdio.h>
void storeArray(int*,int);
void printArray(int*,int);
void reverseArray(int*,int);
void main()
{
	int size;
	printf("Enter the Size of the array: \n");
	scanf("%d",&size);
	int arr[size];
	storeArray(arr,size);
	printArray(arr,size);
	reverseArray(arr,size);
}
void reverseArray(int* arr,int size)
{
	//reverse array
	
	for(int i=0;i<size/2;i++)
	{
		int temp=arr[i];
		arr[i]=arr[size-1-i];
		arr[size-1-i]=temp;
	}
	//printing rev array
	printf("\nprinting reverse Array:");
	printArray(arr,size);	
}
void storeArray(int* arr,int size)
{
	printf("\nEnter the element for the array:");
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
