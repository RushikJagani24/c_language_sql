#include<stdio.h>
int print(int n);
main()
{
	int n=1;
	print(n);

}
int print(int n)
{
	if(n<=50)
	{
		printf("\n%d",n);
		print(n+1);
	}	
}