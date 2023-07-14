#include<stdio.h>
int fact(int n);
main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Factorial=%d",fact(n));
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	int factn=fact(n-1);
	int factN=factn*n;
	return factN;
}