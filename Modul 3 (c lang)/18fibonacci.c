#include<stdio.h>
void fibonacciseries(int range){
	int a=0,b=1,c;
	while(a<=range){
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
}
main(){
	int range;
	printf("Enter range:");
	scanf("%d",&range);
	
	fibonacciseries(range);
}