#include<stdio.h>
void divison(a,b);
main()
{
	int a=10;
	int b=2;
	int c=a/b;
	printf("DIvison=%d",c);
}
void divison(a,b)
{
	return a/b;
}