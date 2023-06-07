#include<stdio.h>
main(){
	int num,num1,profit,loss;
	printf("Enter Number:");
	scanf("%d",&num);
	printf("Enter Number1:");
	scanf("%d",&num1);
	if(num>num1){
		profit=num-num1;
		printf("Profit=%d",profit);
	}
	else{
		loss=num1-num;
		printf("Loss=%d",loss);
	}
}