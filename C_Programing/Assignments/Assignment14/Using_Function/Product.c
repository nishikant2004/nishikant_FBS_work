//10. Product (id, name, quantity, price)
#include<stdio.h>
#include<string.h>
struct Product
{
	int id;
	char name[20];
	int quantity;
	int price;
};
struct Product storeStruct();
void displayStruct(struct Product temp);
void main()
{
	struct Product p1,p2,p3;
	p1=storeStruct();
	displayStruct(p1);
	
	p2=storeStruct();
	displayStruct(p2);
	
	p3=storeStruct();
	displayStruct(p3);
}
struct Product storeStruct()
{
	struct Product temp;
	printf("\nEnter the Id of the Product:");
	scanf("%d",&temp.id);

	fflush(stdin);
	printf("Enter the name of the Product:");
	//scanf("%s",&s2.name);
	gets(temp.name);
	
	printf("Enter the quantity of the Product:");
	scanf("%d",&temp.quantity);
	
	printf("Enter the product price:");
	scanf("%d",&temp.price);
	
	return temp;
}
void displayStruct(struct Product temp)
{
	printf("\nID = %d",temp.id);
	printf("\nName = %s",temp.name);
	printf("\nquantity = %d",temp.quantity);
	printf("\nprice = %d\n",temp.price);
}