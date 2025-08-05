//write a program in c to find common element in two arrays
//eg. arr=1,2,3,4,5 brr= 1,6,7,3,2. o/p=1,2,3.
#include<stdio.h>
void main()
{
	int arr[]={1,2,3,4,5};
	int brr[]={1,6,7,3,2};
	int size1=sizeof(arr)/sizeof(arr[0]);
	int size2=sizeof(brr)/sizeof(brr[0]);
	//printf("%d",size);
	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size2;j++)
		{
			if(arr[i]==brr[j])
			{
				printf("%d ",arr[i]);
			}
		}
	}
}