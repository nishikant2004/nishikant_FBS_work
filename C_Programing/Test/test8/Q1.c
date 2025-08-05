//write a program to prompt user to enter userid and passsward after verifying userid and password 
//display a 4 digit random number and ask user to enter the same. If the user enters the same number then show him sucess message otheriwise failed.
#include<stdio.h>
#include<stdlib.h>
//typedef struct User
//{
//	int id=101;
//	int pass=121;
//} user;

//int verify(id,pass);
void randomNo();

void main()
{
	int id=101;
	int pass=121;
	int userid,password;
	int i=0;
	while(i==0)
	{
		printf("Enter the user id:");
		scanf("%d",&userid);
		printf("Enter the user Password:");
		scanf("%d",&password);
//		int res=verify(userid,password);
		if(id==userid && pass==password)
		{
			randomNo();
			i=1;
		}
		else
			printf("Enter the correct user cradentials.\n");
	}
}
void randomNo()
{
	int randomValue=rand();
	printf("captcha=%d",randomValue);
	int captcha;
	printf("\nEnter this captcha to verify:");
	scanf("%d",&captcha);
	if(randomValue==captcha)
		printf("Registraction successfull");
	else
		printf("Registraction failed");
}
//int verify(id,pass)
//{
//	if(id==user.id && pass==user.pass)
//		return 1;
//	else
//		return 0;
//}
