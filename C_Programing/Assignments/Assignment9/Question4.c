//4.find odd and even among the given number
#include<stdio.h>
void storeArray(int*,int);
void printArray(int*,int);
void findEvenOdd(int*,int);
void main()
{
	int size;
	printf("Enter the Size of the array:");
	scanf("%d",&size);
	int arr[size];
	storeArray(arr,size);
	printArray(arr,size);
	findEvenOdd(arr,size);
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
void findEvenOdd(int* arr,int size)
{

	//finding the number is even or odd
	printf("\nPrinting the even and odd numbers.");
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
			printf("\n %d is even",arr[i]);
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
			printf("\n %d is odd",arr[i]);
	}
}