#include<stdio.h>
main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	if(n>=18)
	{
		printf("You are eligible");
	}
	else
	{
		printf("You are not eligible");
	}
}