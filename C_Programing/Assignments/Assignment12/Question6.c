//6. WAP to Take in a String and Replace Every Blank Space with special symbol.
#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("Enter the string:");
	gets(str);
	printf("%s\n",str);
	char specialSymbols[] = {
        '!', '@', '#', '$', '%', '^', '&', '*',
        '(', ')', '-', '_', '=', '+', '[', ']',
        '{', '}', '\\', '|', ';', ':', '\'', '"',
        ',', '<', '.', '>', '/', '?', '~', '`'
    };
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			str[i]=specialSymbols[i];
		}
		i++;
	}
	printf("%s",str);
}