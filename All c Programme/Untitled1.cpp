#include<stdio.h>
main(){
	int num,even=0,odd=0,rem;
	printf("Enter Number:");
	scanf("%d",&num);
	while(num>0){
		if(num%2==0){
			rem=num%10;
			num=num/10;
			even=even+rem;
		printf("\nEven sum=%d",even);}
		else{
			rem=num%10;
			num=num/10;
			odd=odd+rem;
			printf("\nodd sum=%d",odd);	}
}	}
	
