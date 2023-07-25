#include<stdio.h>
main()
{
	int n,i=0,sum;
	printf("Enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("Sum =%d",sum);
}