/*with parameter and with return type*/
#include<stdio.h>
int sq(int n);
main()
{
	int n,squ;
	printf("Enter number:");
	scanf("%d",&n);
	squ=sq(n);
	printf("Square=%d",squ);
}
int sq(int n)
{
	return n*n;
}