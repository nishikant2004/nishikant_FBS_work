//4. Ask the user to enter marks.
//Then show the result based on these rules:
//If marks are more than 75 ? show "Distinction"
//If marks are more than 65 ? show "First Class"
//If marks are more than 55 ? show "Second Class"
//If marks are 40 or more ? show "Pass Class"
//If marks are less than 40 ? show "Fail"
#include<stdio.h>
int result();
void main()
{
	int res=result();
	if(res==1)
		printf("distinction");
	else if(res==2)
		printf("First Class");
	else if(res==3)
		printf("Second Class");
	else if(res==4)
		printf("Pass Class");
	else if(res==5)
		printf("Fail");
}
int result()
{
		int marks;
	printf("Enter the Marks:");
	scanf("%d",&marks);
	if(marks>75)
		return 1;
	if(marks<=75 && marks>65)
		return 2;
	if(marks<=65 && marks>55)
		return 3;
	if(marks<=55 && marks>=40)
		return 4;
	
	if(marks<40)
		return 5;
	
}