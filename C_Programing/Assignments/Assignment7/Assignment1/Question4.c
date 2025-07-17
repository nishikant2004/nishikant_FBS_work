#include<stdio.h>
void vo_or_con(char *ch);
void main()
{
	char ch;
	printf("Enter a character:\n");
	scanf("%c",&ch);
	vo_or_con(&ch);
}
void vo_or_con(char *ch)
{
	if(*ch=='a'||*ch=='e'||*ch=='i'||*ch=='o'||*ch=='u'|| *ch=='A'||*ch=='E'||*ch=='I'||*ch=='O'||*ch=='U')
	{
		printf("%c is a vowel",*ch);
	}
	else if(*ch>='A' && *ch<='z')
	{
		printf("%c is a consonent",*ch);
	}
	else if(*ch>='0'&&*ch<='9')
	{
		printf("%c is a number",*ch);
	}
	else
	{
		printf("%c is a special character",*ch);	
	}
}