#include<stdio.h>
main(){
	float num,sum=0,i;
	float ave;
	printf("Enter number:");
	scanf("%f",&num);
	for(i=1;i<=num;i++){
		sum=sum+i;
		ave=sum/num;
	}printf("Sum=%.0f",sum);
	printf("\nAverage=%2f",ave);
}