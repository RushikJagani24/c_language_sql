#include<stdio.h>
main()
{
		int i,rev=0,rem,num;
		printf("Enter Number:");
		scanf("%d",&num);
		for(i=1;i<=num;i++)
		{
			rem=num%10;
			rev=rev*10+rem;
			num=num/11;
		}
		printf("%d",rev);
}