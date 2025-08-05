//strcasecmp() function is used to compare the character of string case insensetively.
//mystrcmp funcion
#include<stdio.h>
#include <ctype.h>
int mystrcmp(char* str1,char*str2);
void main()
{
	char str1[50];
	printf("Enter the string to enter:");
	scanf("%s",str1);
	char str2[50];
	printf("Enter the string to enter:");
	scanf("%s",str2);
	int res=mystrcmp(str1,str2);
	if(res==0)
		printf("Both are equal");
	else if(res>0)
		printf("str1 is greater");
	else if(res<0)
		printf("str1 is smaller");
}
int mystrcmp(char* str1,char*str2)
{
	if(strlen(str1)!=strelen(Str2))
		return 1;
		
	int i=0;
	while(str1[i]!='\0')
	{
		str1[i]=tolower(str1[i]);
		str2[i]=tolower(str2[i]);
		if(str1[i]!=str2[i])
		{
			int res=str1[i]-str2[i];
			return res;
		}
		i++;
	}
	return 0;


}
//analyse it properly
