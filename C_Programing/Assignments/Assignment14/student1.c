//Wap to take input from the user and store it in a structure.
#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	char name[50];
	int marks;
};
void main()
{	
	struct student s1;
	
	printf("Enter the rollno of the student 1:");
	scanf("%d",&s1.rollno);

	fflush(stdin);
	printf("\nEnter the name of the student 1:");
	//scanf("%s",&s2.name);
	gets(s1.name);
	
	printf("\nEnter the marks of the student 1:");
	scanf("%d",&s1.marks);
	
	printf("\nRoll no = %d",s1.rollno);
	printf("\nName = %s",s1.name);
	printf("\nmarks = %d",s1.marks);
	
	struct student s2;
	
	printf("\nEnter the rollno of the student 2:");
	scanf("%d",&s2.rollno);

	fflush(stdin);
	printf("\nEnter the name of the student 2:");
	//scanf("%s",&s2.name);
	gets(s2.name);
	
	printf("\nEnter the marks of the student 2 :");
	scanf("%d",&s2.marks);
	
	printf("\nRoll no = %d",s2.rollno);
	printf("\nName = %s",s2.name);
	printf("\nmarks = %d",s2.marks);
	
	struct student s3;
	
	printf("\nEnter the rollno of the student 3:");
	scanf("%d",&s3.rollno);

	fflush(stdin);
	printf("\nEnter the name of the student 3:");
	//scanf("%s",&s2.name);
	gets(s3.name);
	
	printf("\nEnter the marks of the student 3:");
	scanf("%d",&s3.marks);
	
	printf("\nRoll no = %d",s3.rollno);
	printf("\nName = %s",s3.name);
	printf("\nmarks = %d",s3.marks);
}