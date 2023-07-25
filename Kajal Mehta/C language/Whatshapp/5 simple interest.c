#include<stdio.h>
main()
{
	int p,n;
	float i,r;
	printf("Enter principal And Rate And Year of Number:");
	scanf("%d %f %d",&p,&r,&n);
	i=p*r*n/100;
	printf("Simple Interest=%.2f",i);
}