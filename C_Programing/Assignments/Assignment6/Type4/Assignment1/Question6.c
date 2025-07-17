//6. Write a program to check whether a given character is uppercase or lowercase.
#include<stdio.h>
int isUpper(char);
void main()
{
	char ch;
	printf("Enter a character :");
	scanf("%c",&ch);
	int res=isUpper(ch);
	if(res==1)
		printf("%c is uppercase",ch);
	else
		printf("%d is lowercase",ch);
}
int isUpper(char ch)
{
	if(ch>='A'&& ch<='Z')
		return 1;
	if(ch>='a'&& ch<='z')
		return 0;
}