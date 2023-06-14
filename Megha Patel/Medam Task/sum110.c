#include<stdio.h>
main(){
	int a,b,i,sum=0;
	printf("Enter start A:");
	scanf("%d",&a);
	printf("Enter End B:");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++){
		sum=sum+i;
	}
		printf("\nSum=%d",sum);
	}