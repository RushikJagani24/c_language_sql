#include<stdio.h>
main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	if(n%4==0)
	{
		printf("Leap");
	}
	else
	{
		printf("Simple");
	}
}