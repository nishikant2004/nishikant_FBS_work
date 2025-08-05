//Sort the array.
#include<stdio.h>
void storeArray(int*,int);
void printArray(int*,int);
void SortArray(int*,int);
void main()
{
	int size;
	printf("Enter the Size of the array: \n");
	scanf("%d",&size);
	int arr[size];
	storeArray(arr,size);
	printArray(arr,size);
	SortArray(arr,size);
}
void SortArray(int* arr,int size)
{
	//sorting an array
	for(int i=0;i<size;i++)
	{
		int flag=0;
		for(int j=0;j<size-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				flag=1;
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		if(flag==0)
			break;	
	}
	printf("\nPrinting sorted array:");
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
