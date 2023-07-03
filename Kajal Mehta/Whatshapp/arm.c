#include<stdio.h>
main()
{
	int temp,i,rem,sum=0,n;
	printf("Enter n:");
	scanf("%d",&n);
	temp=n;
	for(i=1;i<n;i++)
	{
		rem=n%10;
		sum+=(rem*rem*rem);
		n=n/10;
	}
	if(temp==n)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not armstrong");
	}
	
}