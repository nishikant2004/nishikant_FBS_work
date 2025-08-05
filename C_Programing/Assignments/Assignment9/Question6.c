//6.Accept array and print only prime numbers from an array.
#include<stdio.h>
void storeArray(int*,int);
void printArray(int*,int);
void printPrimeNumbers(int*,int);
void main()
{
	int size;
	printf("Enter the Size of the array:");
	scanf("%d",&size);
	int arr[size];
	storeArray(arr,size);
	printArray(arr,size);
	printPrimeNumbers(arr,size);
}
void printPrimeNumbers(int* arr,int size)
{
	//printing prime numbers.
	printf("\nprinting prime numbers.");
	for(int i=0;i<size;i++)
	{
		int temp=arr[i];
		int isprime=0;
		for(int j=2;j<temp;j++)
		{
			if(temp%j==0)
			{
				isprime=1;
				break;
			}
		}
		if(isprime==0)
			printf("%d ",temp);
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
