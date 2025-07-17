//1.Find the maximum and minimum number in the array.
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the Size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	//taking array input
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		//printing the array elements
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	//printing max and min elements.
	int max=arr[0],min=arr[0];
	for(int i=1;i<n;i++)
	{	
		if(max<arr[i])
			max=arr[i];
		if(min>arr[i])
			min=arr[i];
	}
	printf("\n %d is maximum and %d is minimum.",max,min);
}