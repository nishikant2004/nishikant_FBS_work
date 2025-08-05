//WAP to initialize some amount in your account. Then give choice to user for deposit or
//withdraw. and display updated amount. Condition to withdraw (if the balance is less than
//3000 display can't withdraw the amount balance is not sufficient).
//( using function )
#include<stdio.h>
void deposit(int* Amount);
void display(int* Amount);
void withdraw(int* Amount);
void main()
{
	int i=1;
	int Amount;
	while(i==1)
	{
		int choice;
		printf("\nIf you want to Deposit then press 1. \nIf you want to withdraw then press 0:");
		scanf("\n%d",&choice);
		if(choice==1)
		{
			deposit(&Amount);
			display(&Amount);
		}
		else if(choice==0)
		{
			withdraw(&Amount);
			display(&Amount);
		}
		else
			printf("\nEnter the correct choice.");
		
		int repeat;
		printf("\nif You want to countinue then press 1. \nif not then press any number:");
		scanf("%d",&repeat);
		if(repeat!=1)
		{
			break;
		}
	}

}
void deposit(int* Amount)
{
	int depAmt;
	printf("\nEnter the Amount you want to deposit:");
	scanf("%d",&depAmt);
	*Amount=depAmt;
}
void display(int* Amount)
{
	printf("\nAmount in Your Account=%d",*Amount);
}
void withdraw(int* Amount)
{
	int withAmt;
	printf("\nEnter the Amount you want to withdraw:");
	scanf("%d",&withAmt);
	if(*Amount<3000 || *Amount<withAmt)
		printf("\nCan't withdraw the amount,balance is not sufficient.");
	else
		*Amount=*Amount-withAmt;
}