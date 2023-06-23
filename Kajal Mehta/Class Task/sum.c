#include<stdio.h>
main()
{
	int i,sum=0,num;
	printf("Enter Number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
		
	}
	printf("Sum=%d",sum);
}