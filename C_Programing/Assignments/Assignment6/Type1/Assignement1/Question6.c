//6. Write a program to check whether a given character is uppercase or lowercase.
#include<stdio.h>
void isUpper();
void main()
{
	isUpper();
}
void isUpper()
{
	char ch;
	printf("Enter a character :");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
		printf("%c is uppercase",ch);
	if(ch>='a'&& ch<='z')
		printf("%c is lowecase",ch);
}