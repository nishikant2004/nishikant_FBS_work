//5.print alternate elements in array.
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
	for(int i=0;i<n;i+=2)
	{n
		printf("%d ",arr[i]);
	}
}