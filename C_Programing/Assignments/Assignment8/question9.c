//reverse array
#include<stdio.h>
 void main()
 {
 	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the numbers:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//printing array
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	//reverse array
	
	for(int i=0;i<n/2;i++)
	{
		int temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
	//printing rev array
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	
 }