#include<stdio.h>
main()
{
	int n,rev=0,rem,i;
	printf("Enter Number:");
	scanf("%d",&n);
	for(;n!=0;i++)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("Reverse no =%d",rev);
}