#include<stdio.h>
main(){
	int n;
	printf("Enter Number:");
	scanf("%d",&n);
	if(n%4==0){
		printf("Leap..");
	}
	else{
		printf("Regulars..");
	}
}