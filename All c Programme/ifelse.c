#include<stdio.h>
main(){
	int a;
	printf("Enter a:");
	scanf("%d",&a);
	if(a%2==0){
		printf("Even");
	}
	else{
		printf("Odd");
	}
}