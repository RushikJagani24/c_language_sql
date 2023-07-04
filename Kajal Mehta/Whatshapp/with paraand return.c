/*with parameter and with return type*/

#include<stdio.h>
int mul(int a,int b);
main()
{
	int a,b,c;
	printf("Enter a: b:");
	scanf("%d %d",&a,&b);
	c=mul(a,b);
	printf("%d",c);
}
int mul(int a,int b)
{
	return a*b;
}

#include<stdio.h>
int sq(int n);
main()
{
	int n,squ;
	printf("Enter number:");
	scanf("%d",&n);
	squ=sq(n);
	printf("Square=%d",squ);
}
int sq(int n)
{
	return n*n;
}