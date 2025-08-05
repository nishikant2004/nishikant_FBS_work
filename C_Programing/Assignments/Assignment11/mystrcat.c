#include<stdio.h>
#include<string.h>
char* mystrcat(char* dest,const char* src);
void main()
{
	//building the strcat function.
	char st1[30]={"Nishikant"};
	char st2[]={" Khambalkar"};
	char* mystr=mystrcat(st1,st2);
	printf("%s",mystr);
}
char* mystrcat(char* dest,const char* src)
{	
	int i=0;
	int len=strlen(dest);
	//printf("%d",len);
	while(src[i]!='\0')
	{
		dest[len+i]=src[i];
		i++;
	}
	//dest[len+i]='\0';
	return dest;
}