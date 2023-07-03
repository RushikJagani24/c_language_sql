#include<stdio.h>
main()
{
	int n,fact=1,i;
	printf("Enter number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("Factorial %d",fact);
	
	
	
	
}