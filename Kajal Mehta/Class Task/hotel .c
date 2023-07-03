#include<stdio.h>
 int main()
{
	int choice,qty,total=0,final=0;
	char ch;
	menu:
	printf("1.Vadapav\t\t\t\t40\n");
	printf("2.Fankie\t\t\t\t60\n");
	printf("3.Manchurian\t\t\t\t140\n");
	printf("4.Dhosa\t\t\t\t\t150\n");
	printf("5.Bhanuna khaman\t\t\t300");
	
	printf("\nEnter Your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("You are choose Vadapav...\n");
			printf("Enter qntity:");
			scanf("%d",&qty);
			total=40*qty;
			final+=total;
			printf("Total = %d",total);
			break;
		
		case 2:
			printf("You are choose Fankie...\n");
			printf("Enter qntity:");
			scanf("%d",&qty);
			total=60*qty;
			final+=total;
			printf("Total = %d",total);
			break;

		case 3:
			printf("You are choose Manchurian...\n");
			printf("Enter qntity:");
			scanf("%d",&qty);
			total=140*qty;
			final+=total;
			printf("Total = %d",total);
			break;

		case 4:
			printf("You are choose Dhosa...\n");
			printf("Enter qntity:");
			scanf("%d",&qty);
			total=150*qty;
			final+=total;
			printf("Total = %d",total);
			break;

		case 5:
			printf("You are choose Bhanuna khaman...\n");
			printf("Enter qntity:");
			scanf("%d",&qty);
			total=300*qty;
			final+=total;
			printf("Total = %d",total);
			break;

		default:
			printf("\nEnter your correct choice...");
			break;
				
		}
	
		printf("\nEnter you are Need Another cheese: y or n :\n");
		scanf("%s",&ch);
		
		if(ch=='y')
		{
			goto menu;
		}
		else
		{
			
			printf("Thank you.......\n");
			printf("Final Amount = %d",final);
		}
}