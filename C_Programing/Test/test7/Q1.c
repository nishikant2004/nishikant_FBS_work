//Q1.Write a program to accept and exchange the data of Xth position to Yth postition 
//eg.Arr[]={11,23,30,4,21,45,50}
// Xth position=3
//Yth position=5
//O/p:11 23,21,4,30,45,50  (using function)
#include<stdio.h>
void exchange(int* arr,int pos1,int pos2);
void main()
{
	int size;
//	printf("Enter the size of the array:");
//	scanf("%d",&size);
	int arr[]={11,23,30,4,21,45,50};
	size=sizeof(arr)/sizeof(arr[0]);
	
////	printf("Enter the array elements:");
//	for(int i=0;i<size;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	int pos1;
	printf("\nEnter the pos1:");
	scanf("%d",&pos1);

	int pos2;
	printf("\nEnter the pos2:");
	scanf("%d",&pos2);	
	exchange(arr,pos1,pos2);
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	
	
}
void exchange(int* arr,int pos1,int pos2)
{
	int index1=pos1-1;
	int index2=pos2-1;
	int temp=arr[index1];
	arr[index1]=arr[index2];
	arr[index2]= temp;
}
