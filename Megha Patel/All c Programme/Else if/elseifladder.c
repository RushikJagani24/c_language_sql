#include<stdio.h>
main(){
	int x,y;
	printf("Enter x:");
	scanf("%d",&x);
	printf("Enter y:");
	scanf("%d",&y);
	if(x>0 && y>0){
		printf("First");
	}
	else if(x<0 && y>0){
		printf("Second");
	}
	else if(x<0 && y<0){
		printf("Third");
	}
	else if(x>0 && y<0){
		printf("Fourth");
	}
	
}