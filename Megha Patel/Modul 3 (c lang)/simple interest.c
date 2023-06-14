#include<stdio.h>
main()
{
		int p,r,n,interest,total_amount;
		printf("Enter principal:");
		scanf("%d",&p);
		printf("Enter rate:");
		scanf("%d",&r);
		printf("Enter number of year:");
		scanf("%d",&n);
		
		interest=p*r*n/100;
		printf("Interest=%d",interest);
		
		total_amount=p+interest;
		printf("\nTotal_amount=%d",total_amount);
}
