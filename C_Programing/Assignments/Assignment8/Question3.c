//3.find sum of all the number in array.
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
	//finding sum
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("\nSum of all the number in array:%d",sum);
}