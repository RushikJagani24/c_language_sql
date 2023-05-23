#include<stdio.h>
main(){
	int ch,i;
	printf("\nPress 1 for Forward value...");
	printf("\nPress 2 for Return value ...");
	printf("\nEnter choice...");
	scanf("%d",&ch);
	switch (ch){
		case 1:
			for(i=1;i<=10;i++){
				printf("\ni=%d",i);
			}
			break;
		case 2:
			for(i=10;i>=1;i--){
				printf("\ni=%d",i);
			}
			break;
		default :{
			printf("Wrong choice...");
		}
			break;			
	}
}
