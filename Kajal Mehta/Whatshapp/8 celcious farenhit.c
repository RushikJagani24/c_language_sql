#include<stdio.h>
main()
{	
	float c,f;
	printf("\nEnter celcious:");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("\nFarehnehit = %.2f",f);
	printf("\nEnter Farehnhit:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("\nCelcious = %.2f",c);
}