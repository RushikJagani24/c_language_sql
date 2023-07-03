#include<stdio.h>
main()
{
	int salary;
	float tax,gross,total;
	printf("Enter Salary And Tax:");
	scanf("%d %f",&salary,&tax);
	total=tax/100;
	gross=salary-total;
	printf("Gross Salary %f",gross);
}