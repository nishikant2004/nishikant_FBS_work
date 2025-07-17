//Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased 6more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.
#include<stdio.h>
void discount(char student,double purchase);
void main()
{
	char student;
	printf("If you are student then type Y and not then type N :");
	scanf("%c",&student);
	double purchase;
	printf("Enter the purchase value :");
	scanf("%lf",&purchase);
	discount(student,purchase);
}
void discount(char student,double purchase)
{
	double price;
	if(student=='Y')
	{
		if(purchase>500)
		{
			price=purchase-purchase*0.20;
			printf("%lf is price",price);	
		}
		else
		{
			price=purchase-purchase*0.10;
			printf("%lf is price",price);	
		}
	}
	else
	{
		if(purchase>600)
		{
			price=purchase-purchase*0.15;
			printf("%lf is price",price);	
		}
		else
		{
			price=purchase;
			printf("%lf is price",price);	
		}
	}
}