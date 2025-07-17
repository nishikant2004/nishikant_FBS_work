//take 2 array and add sum in the third array.
//Ex.
//arr[5]={1,2,3,4,5}
//brr[5]={10,20,30,40,50}
//crr[5]={11,22,33,44,55}
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array1 elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int brr[n];
	printf("Enter the array2 elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&brr[i]);
	}
	//array sum in third array
	int crr[n];
	for(int i=0;i<n;i++)
	{
		crr[i]=arr[i]+brr[i];
		
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",crr[i]);
	}
	
}