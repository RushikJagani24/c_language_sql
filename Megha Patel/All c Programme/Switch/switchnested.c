#include<stdio.h>
main(){
	int ch,num,sq,cube;
	printf("\nPress 1 for square..");
	printf("\nPress 2 for Cube...");
	printf("\nPress 3 for Positive / Negative..");
	
	printf("\nEnter Your Choice..==");
	scanf("%d",&ch);
	 
	switch(ch){
		case 1:
			printf("Enter number:");
			scanf("%d",&num);
			sq=num*num;
			printf("Square of %d =%d",num,sq);
			break;
			
		case 2:
			printf("Enter Number:");
			scanf("%d",&num);
			cube=num*num*num;
			printf("Cube of %d=%d",num,cube);
			break;
			
		case 3:
			printf("Enter Number:");
			scanf("%d",&num);
			(num>0)?printf("Positive"):printf("Negative");
			break;
			
		default:
			printf("Wrong Choice.....");
			break;
	}
	
}