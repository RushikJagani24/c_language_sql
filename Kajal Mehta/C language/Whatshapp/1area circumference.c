#include<stdio.h>
main()
{
	int r;
	float area,circumference;
	printf("Enter Rectangle:");
	scanf("%d",&r);
	area=3.14*r*r;
	circumference=2*3.14*r;
	printf("Area of circle=%.2f\n",area);
	printf("circumference of circle=%.2f",circumference);
}