#include<stdio.h>
main(){
	int m,c,p,total,subtotal;
	printf("Enter \nmath \nchemestry \nphy:");
	scanf("%d %d %d",&m,&c,&p);
	if(m>=65 && c>=55 && p>=50){
		total=m+c+p;
		subtotal=m+p;
		
		if(total>=190 || subtotal>=140){
			printf("Elegible");
		}
		else{
			printf("Non eligible");
		}
	}
	else{
		printf("Not eligible");
	}
	}	