//9. Complex (real, imaginary)
#include<stdio.h>
struct Complex
{
	float real;
	float imaginary;
};
void main()
{
	struct Complex c1;
	
	c1.real=3.2;
	c1.imaginary=3;
	
	printf("complex number=%.2f + %.2fi",c1.real,c1.imaginary);
	
	struct Complex c2;
	
	printf("\nEnter the real part:");
	scanf("%f",&c2.real);
	
	printf("\nEnter the imaginary part:");
	scanf("%f",&c2.imaginary);
	
	printf("complex number=%.2f + %.2fi",c2.real,c2.imaginary);
}