#include<stdio.h>
main(){
	int num,i;
	printf("Enter number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
	//	printf("\n%d*%d*%d=%d",i,i,i,i*i*i);
	printf("\n%d od cube is =%d",i,i*i*i);
	}printf("\n");
}