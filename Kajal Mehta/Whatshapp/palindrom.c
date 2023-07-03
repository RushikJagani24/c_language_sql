#include<stdio.h>
main()
{
	int rev=0,rem,num,original;
	printf("Entrt Number:");
	scanf("%d",&num);
	original=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(original==rev)
	{
		printf("Palindrom Number..");
	}
	else
	{
		printf("Not Palindrom Number..");
	}
	
}