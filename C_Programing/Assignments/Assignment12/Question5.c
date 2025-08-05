//5. WAP to Count the Number of Vowels in a String
#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("Enter the string:");
	scanf("%s",&str);
	int count=0, i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||
		str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
		
			count++;
		}
		i++;
	}
	printf("%d",count);
}