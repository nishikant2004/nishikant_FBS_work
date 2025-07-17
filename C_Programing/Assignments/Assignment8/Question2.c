//2.Search the given number in array.
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
	//search in array
	int Ele,index=0;
	printf("\nEnter the number you want to search:");
	scanf("%d",&Ele);
	for(int i=0;i<n;i++)
	{
			
		if(Ele==arr[i])
		{
			index++;
			printf("Element found at index %d.",i);
			break;
		}
	}
	if(index==0)
		printf("Element not found.");
	
}