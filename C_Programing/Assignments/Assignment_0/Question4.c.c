#include<stdio.h>
void  main()
{
	int A=10,B=20;
	
	int temp=A;
	A=B;
	B=temp;
	printf("After Swap A=%d And B= %d",A,B);
}