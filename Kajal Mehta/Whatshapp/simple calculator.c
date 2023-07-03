#include<stdio.h>
main()
{
	int a,b,choice,sum,sub,mul,div;
	printf("1.Summation..\n");
	printf("2.Subtraction..\n");
	printf("3.Multiplication..\n");
	printf("4.Divison..\n");
	
	printf("Enter Your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter A:");
			scanf("%d",&a);
			printf("Enter B:");
			scanf("%d",&b);
			sum=a+b;
			printf("Summation=%d",sum);
			break;
	
		case 2:
			printf("Enter A:");
			scanf("%d",&a);
			printf("Enter B:");
			scanf("%d",&b);
			sub=a-b;
			printf("Subtraction=%d",sub);
			break;
		
		case 3:
			printf("Enter A:");
			scanf("%d",&a);
			printf("Enter B:");
			scanf("%d",&b);
			mul=a*b;
			printf("Multiplication=%d",mul);
			break;
		
		case 4:
			printf("Enter A:");
			scanf("%d",&a);
			printf("Enter B:");
			scanf("%d",&b);
			div=a/b;
			printf("Summation=%d",div);
			break;
		
		default:
			printf("Enter your correct choice..");
		
	}
	
}