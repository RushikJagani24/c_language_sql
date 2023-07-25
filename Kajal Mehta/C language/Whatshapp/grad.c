#include<stdio.h>
main()
{
	int mark,ch;
	printf("1.mark>=90\tA++.\n");
	printf("2.mark>=80\tA.\n");
	printf("3.mark>=70\tB.\n");
	printf("4.mark>=60\tC.\n");
	printf("5.mark>=50\tD.\n");
	printf("6.mark<=35\tFail.\n");
	
	printf("Enter Choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("Enter marks:");
			scanf("%d",&mark);
			if(mark>=90)
			{
				printf("A++");
			}
		break;
		
		case 2:
			printf("Enter marks:");
			scanf("%d",&mark);
			if(mark>=80)
			{
				printf("A");
			}
		break;
		
		case 3:
			printf("Enter marks:");
			scanf("%d",&mark);
			if(mark>=70)
			{
				printf("B");
			}
		break;
		
		case 4:
			printf("Enter marks:");
			scanf("%d",&mark);
			if(mark>=60)
			{
				printf("C");
			}
		break;
		
		case 5:
			printf("Enter marks:");
			scanf("%d",&mark);
			if(mark>=50)
			{
				printf("D");
			}
		break;
		
		case 6:
			printf("Enter marks:");
			scanf("%d",&mark);
			if(mark<=35)
			{
				printf("Fail");
			}
		break;
	
		default:
			printf("Please correct choice:");
		
}
				
}