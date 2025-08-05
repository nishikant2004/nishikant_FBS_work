//mystrcpy function
#include<stdio.h>
#include<string.h>
char* mystrcpy(char* dest,char* src);
void main()
{
	char str1[50];
	printf("Enter the string.");
	scanf("%s",str1);
	char str2[50];
	char* dest=mystrcpy(str2,str1);
	printf("\n%s",dest);
}
char* mystrcpy(char* dest,char* src)
{
	char* temp=dest;
	int i=0;
	
	while(src[i]!='\0')
	{
//		*dest=*src;
//		src++;
//		dest++;
		dest[i]=src[i];
//		printf("\n%c",dest[i]);
//		printf("\n%c",src[i]);
		i++;
	}

	//*dest='\0';
//	printf("\n%c",src);
//	printf("\n%c",*dest);
	return temp;
	//Ask sir that if that we not assign the null value at the last then it already have a null value or that we have to assign it
	
}
