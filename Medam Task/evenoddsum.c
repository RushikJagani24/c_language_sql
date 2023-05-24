#include<stdio.h>
main(){
	int i,a,b,sum,even=0,odd=0;
	printf("Enter A:");
	scanf("%d",&a);
	
	printf("Enter B:");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++){
		printf("\n%d",i);
		
		if(i%2==0){
			printf("\tEven num \n\t",i);
			even=even+i;
		}
		else{
			printf("\tOdd num \n \t",i);
			odd=odd+i;
		}
	}
 	printf("\nEven sum=%d",even);
	printf("\nodd sum=%d",odd);
	
}