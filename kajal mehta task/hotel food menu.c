#include<stdio.h>
main(){
	int ch,qty,total=0;
	char ans,y,n;
	list:
	printf("\n1.Zunglee Vadapav        40");
	printf("\n2.Aloopuri		 60");
	printf("\n3.Fankie                 60");
	printf("\n4.Manchurian            140");
	printf("\n5.Dhosa(1paper+1Bhaji)  150");
	printf("\n6.Bhanuna Khaman	300");
	
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			printf("\nyou choose Zunglee Vadapav.....");
			printf("\nEnter Quntity of Zunglee Vadapav:");
			scanf("%d",&qty);
			total=total+(40*qty);
			printf("Total=%d",total);
		break;
			
		case 2:
			printf("\nyou choose Alloopuri.....");
			printf("\nEnter Quntity of Alloopuri:");
			scanf("%d",&qty);
			total=total+(60*qty);
			printf("Total=%d",total);
		break;
		
		case 3:
			printf("\nyou choose Fankie.....");
			printf("\nEnter Quntity of Fankie:");
			scanf("%d",&qty);
			total=total+(60*qty);
			printf("Total=%d",total);
		break;
		
		case 4:
			printf("\nyou choose Manchurian.....");
			printf("\nEnter Quntity of Manchurian:");
			scanf("%d",&qty);
			total=total+(140*qty);
			printf("Total=%d",total);
		break;

		case 5:
			printf("\nyou choose Dhosa.....");
			printf("\nEnter Quntity of Dhosa:");
			scanf("%d",&qty);
			total=total+(150*qty);
			printf("Total=%d",total);
		break;

		case 6:
			printf("\nyou choose Bhanuna Khaman.....");
			printf("\nEnter Quntity of Bhanuna Khaman:");
			scanf("%d",&qty);
			total=total+(300*qty);
			printf("Total=%d",total);
		break;
		
		default:
			printf("Invalid Item Selection..");
	}
 	
 	
 	printf("\n\nDo you Want to Other Item:");
 	printf("\nEnter your next choice:");
 	scanf("%d",&ans);
 	if(ans=='y'){
 		goto list;
	 }
	 printf("\nTotal amount : %d",total);
     printf("\nThank You Come Again");
}