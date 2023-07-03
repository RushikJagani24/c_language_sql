#include<stdio.h>
main()
{
	int h,b;
	float area;
	printf("Enter Height And Base:");
	scanf("%d %d",&h,&b);
	area=(h*b)/2;
	printf("Area of tringle = %.2f",area);
}