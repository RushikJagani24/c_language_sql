#include<stdio.h>
main(){
	int i,a,b,sq;
	printf("Enter Start A:");
	scanf("%d",&a);
	printf("Enter End B:");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++){
		printf("\n%d",i);
		
		sq=i*i;
		printf("\tSquare\t=\t%d",sq);
	}
}