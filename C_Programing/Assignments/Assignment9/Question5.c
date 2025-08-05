//5.print alternate elements in array.
#include<stdio.h>
void storeArray(int*,int);
void printArray(int*,int);
void printAlternateNo(int*,int);
void main()
{
	int size;
	printf("Enter the Size of the array:");
	scanf("%d",&size);
	int arr[size];
	storeArray(arr,size);
	printArray(arr,size);
	printAlternateNo(arr,size);
}
void printAlternateNo(int* arr,int size)
{
	printf("\n printing Alternate number.");
	for(int i=0;i<size;i+=2)
	{
		printf("%d ",arr[i]);
	}
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