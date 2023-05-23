#include<stdio.h>
main(){
	int a,i=1;
	printf("Enter number of table:");
	scanf("%d",&a);
	while(i<=10){
		printf("\n %d*%d=%d",a,i,a*i);
		i++;
	}
}