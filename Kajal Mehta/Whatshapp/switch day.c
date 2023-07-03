#include<stdio.h>
main()
{
	int choice;
	printf("1.Monday\n");
	printf("2.Tuesday\n");
	printf("3.Wednesay\n");
	printf("4.Thusday\n");
	printf("5.Friday\n");
	printf("6.Saturday\n");
	printf("7.Sunday\n");
	
	printf("Enter choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Monday\n");
			break;
			
		case 2:
			printf("Tuesday\n");
			break;
			
		case 3:
			printf("Wednesday");
			break;
			
		case 4:
			printf("Thusday");
			break;
		
		case 5:
			printf("Friday");
			break;
		
		case 6:
			printf("Saturday");
			break;
			
		case 7:
			printf("Sunday");
			break;
			
		default:
			printf("Correct Enter choice");
			break;
			
	}
}