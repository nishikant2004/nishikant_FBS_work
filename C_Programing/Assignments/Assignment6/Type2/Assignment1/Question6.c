//6. Write a program to check whether a given character is uppercase or lowercase.
#include<stdio.h>
int isUpper();
void main()
{
	int res=isUpper();
	if(res==1)
		printf(" is uppercase");
	else
		printf(" is lowecase");
}
int isUpper()
{
	char ch;
	printf("Enter a character :");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
		return 1;
	if(ch>='a'&& ch<='z')
		return 0;
		
}