//Sort the array.
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int* arr=(int*)malloc(sizeof(int)*n);
	printf("Enter the array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//sorting an array
	for(int i=0;i<n;i++)
	{
		int flag=
		30;
		for(int j=0;j<n-i;j++)
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
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}