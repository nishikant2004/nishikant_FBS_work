//write a program in c to find two maximum number in array.
#include<stdio.h>
void main()
{
	int size;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements of the array:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max1,max2;
	if(arr[0]>arr[1])
	{
		int max1=arr[0];
		int max2=arr[1];
	}
	else
	{
		max1=arr[1];
		max2=arr[0];
	}
	for(int i=2;i<size;i++)
	{
		if(max1<arr[i])
		{
			max2=max1;
			max1=arr[i];
		}
		else if(max2<arr[i] && arr[i] !=max1)
		{
			max2=arr[i];
		}
	}
	printf("%d is max1 ",max1);
	printf("%d is max2 ",max2);
}
