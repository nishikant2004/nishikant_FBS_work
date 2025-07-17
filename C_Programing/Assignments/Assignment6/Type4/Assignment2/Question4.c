//4. Ask the user to enter marks.
//Then show the result based on these rules:
//If marks are more than 75 ? show "Distinction"
//If marks are more than 65 ? show "First Class"
//If marks are more than 55 ? show "Second Class"
//If marks are 40 or more ? show "Pass Class"
//If marks are less than 40 ? show "Fail"
#include<stdio.h>
char result(int marks);
void main()
{
	int marks;
	printf("Enter the Marks:");
	scanf("%d",&marks);
	char ch=result(marks);
	if(ch=='d')
		printf("Distinction");
	else if(ch=='f')
		printf("First Class");
	else if(ch=='s')
		printf("Second Class");
	else if(ch=='p')
		printf("Pass Class");
	else if(ch=='A')
		printf("Fail");
}
char result(int marks)
{
	if(marks>75){
		//printf("Distinction");
		return 'd';
	}
	else if(marks<=75 && marks>65){
	//	printf("First Class");
		return 'f';
	}
	else if(marks<=65 && marks>55){
		//printf("Second Class");
		return 's';
	}
	else if(marks<=55 && marks>=40){
		//printf("Pass Class");
		return 'p';
	}
	else if(marks<40){
		//printf("Fail");
		return 'A';
	}
}