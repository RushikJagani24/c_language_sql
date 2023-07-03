#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a:");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("%d is big",a);
	}
	else
	{
		printf("%d is big",b);
	}
}