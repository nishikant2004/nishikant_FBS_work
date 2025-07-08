//2. Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.
#include<stdio.h>
void main()
{
	int s1,s2,s3;
	printf("Enter the Side of the Trangle \n");
	scanf("%d %d %d",&s1,&s2,&s3);
	if(s1==s2 && s2==s3)
		printf("It is a Equilateral Triangle");
	else if(s1==s3 || s2==s3 || s1==s3)
		printf("It is a isosceles Triangle");
	else
		printf("It is a scalene Triangle");
	
}