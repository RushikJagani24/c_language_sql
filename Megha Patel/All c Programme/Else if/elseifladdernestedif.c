#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter a \n b \n c");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b){
		if(a>c){
			printf("A Is Big..");
		}
		else
		{
			printf("C Is Big..");
		}
	}
	else if(b>a){
		if(b>c){
			printf("B Is big..");
		}
		else{
			printf("C Is big..");
		}
	}
	else{
		printf("C Is Big..");
	}
}