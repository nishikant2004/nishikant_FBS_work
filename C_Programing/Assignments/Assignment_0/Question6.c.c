#include<stdio.h>
void main(){
	int no;
	printf("Enter a number: ");
	scanf("%d",&no);
	int Square=no*no;
	int Cube=no*no*no;
	printf("%d is a Square of %d \n",Square,no);
	printf("%d is a Cube of %d",Cube,no);	
}