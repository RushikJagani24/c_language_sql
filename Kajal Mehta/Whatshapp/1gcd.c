#include<stdio.h>
main()
{
	int num1,num2,i,gcd;
	printf("Enter Number1:");
	scanf("%d",&num1);
	printf("Enter Number2:");
	scanf("%d",&num2);
	
	for(i=1;i<=num1 && i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd=i;
		}
	}
	printf(" num1=%d num2=%d \n%d",num1,num2,gcd);
	
	
}