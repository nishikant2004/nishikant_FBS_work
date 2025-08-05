//Que 1. WAP to calculate electricity bill.
//For 1-50 units – 30 rs/unit , For 51-150 units – 40 rs/unit, For 151and above units –
//50 rs/unit.
#include<stdio.h>
void main()
{
	int unit;
	int price;
	printf("Enter the Electricity unit:");
	scanf("%d",&unit);
	if(unit>=1 && unit<=50)
	{
		price=unit*30;
	}
	else if(unit>=51 && unit<=150)
	{
		price=unit*40;
	}
	else if(unit>=151)
	{
		price=unit*50;
	}
	printf("Electricity bill=%d",price);
	
}