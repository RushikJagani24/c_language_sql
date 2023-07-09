#include<stdio.h>
int digit(n1);
main()
{
	int n1,count;
	printf("Enter number:");
	scanf("%d",&n1);
	count=digit(n1);	
	printf("%d",count);
}
int digit(int n1)
{
    static int count=0;
	if(n1!=0)
	{
		count++;
		digit(n1/10);	
	}
	return count;
}