//merge two arrays
#include<stdio.h>
void storeArray(int*,int);
void printArray(int*,int);
void mergeArray(int*,int*,int);
void main()
{
	int size;
	printf("Enter the Size of the array: \n");
	scanf("%d",&size);
	int arr[size];
	storeArray(arr,size);
	printArray(arr,size);
	int brr[size];
	storeArray(brr,size);
	printArray(brr,size);
	mergeArray(arr,brr,size);
}
void mergeArray(int* arr,int* brr,int size)
{
	int crr[size*2];
	for(int i=0;i<size;i++)
	{
		crr[i]=arr[i];
	}
	for(int i=0;i<size;i++)
	{
		crr[size+i]=brr[i];
	}
	printf("\nmerged array = ");
	for(int i=0;i<size*2;i++)
	{
		printf("%d ",crr[i]);
	}
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
