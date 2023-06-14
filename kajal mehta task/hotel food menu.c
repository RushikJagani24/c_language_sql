#include<stdio.h>
main(){
	int choice,qty,total=0,totalamt=0;
	char ch;
	do{
	menu:
	printf("\n-----------------Menu-----------------\n");
	printf("1.Vadapav						price=40rs\n");
	printf("2.Aloopuri						price=40rs\n");
	printf("3.Fankie						price=60rs\n");
	printf("4.Burger						price=140rs\n");
	printf("5.Dhosa							price=150rs\n");
	printf("6.Pizza							price=300rs\n");
	
	printf("\nEnter Your Choice:");
	scanf("%d",&choice);
	
	switch(choice){ 
	
		case 1:
			printf("You Have Selected Vadapav..\n");
			printf("Enter Qauntity:");
			scanf("%d",&qty);
			total=(40*qty);
			printf("Total=%d",total);
		break;
		case 2:
			printf("You Have Selected Aloopuri..\n");
			printf("Enter Qauntity:");
			scanf("%d",&qty);
			total=(40*qty);
			printf("Total=%d",total);
		break;
		case 3:
			printf("You Have Selected Fankie..\n");
			printf("Enter Qauntity:");
			scanf("%d",&qty);
			total=(60*qty);
			printf("Total=%d",total);
		break;
		case 4:
			printf("You Have Selected Burger..\n");
			printf("Enter Qauntity:");
			scanf("%d",&qty);
			total=(140*qty);
			printf("Total=%d",total);
		break;
		case 5:
			printf("You Have Selected Dhosa..\n");
			printf("Enter Qauntity:");
			scanf("%d",&qty);
			total=(150*qty);
			printf("Total=%d",total);
		break;
		case 6:
			printf("You Have Selected Khaman..\n");
			printf("Enter Qauntity:");
			scanf("%d",&qty);
			total=(300*qty);
			printf("Total=%d",total);
		break;		
		default:
			printf("\nPlease Available Select Item..\n");
		break;
	}

	totalamt=totalamt+total;
	printf("\nTotal Amount=%d",totalamt);
	printf("\nDo ypu Want to More Order ? y & n:");
	scanf("%s",&ch);
	}while(ch=='y');{
		goto menu;
	if(ch == 'n'){
		printf("\n Your Bill...");
		printf("\n Total Amount=%d",totalamt);
	}
	else{
		printf("Wrong choice");
	}
}}