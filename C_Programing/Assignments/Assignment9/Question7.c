//take 2 array and add sum in the third array.
//Ex.
//arr[5]={1,2,3,4,5}
//brr[5]={10,20,30,40,50}
//crr[5]={11,22,33,44,55}
#include<stdio.h>
void storeArray(int*,int);
void printArray(int*,int);
void ArraySum(int*,int*,int);
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
	ArraySum(arr,brr,size);
}
void ArraySum(int* arr,int* brr,int size)
{
	//array sum in third array
	int crr[size];
	for(int i=0;i<size;i++)
	{
		crr[i]=arr[i]+brr[i];
		
	}
	printf("\nprinting array sum:");
	printArray(crr,size);
	
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
