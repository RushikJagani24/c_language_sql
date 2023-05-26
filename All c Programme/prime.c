#include<stdio.h>
main(){
	int i,num,fage=0;
	printf("Enter number:");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			fage=1;
		}
	}
	(fage==0)?printf("Prime"):printf("Not prime");
}