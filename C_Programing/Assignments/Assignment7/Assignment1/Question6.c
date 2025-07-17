//6. Write a program to check whether a given character is uppercase or lowercase.
#include<stdio.h>
void isUpper(char *ch);
void main()
{
	char ch;
	printf("Enter a character :");
	scanf("%c",&ch);
	isUpper(&ch);
}
void isUpper(char *ch)
{
	if(*ch>='A'&& *ch<='Z')
		printf("%c is uppercase",*ch);
	if(*ch>='a'&& *ch<='z')
		printf("%c is lowecase",*ch);
}