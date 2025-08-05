//Q1.check if teh array is palindrome or not (using funtion)
#include<stdio.h>
void palindrome(int*arr,int size);

void main()
{
	int size;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	int arr[size];
	
	printf("Enter the array elements:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	palindrome(arr,size);
}
void palindrome(int* arr,int size)
{
	int flag=0,i=0;
	while(i!=size){
		if(arr[i]!=arr[size-1-i])
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
		printf(" \nthe array is palindrome");
	else
		printf("\nthe array is not  palindrome");
}