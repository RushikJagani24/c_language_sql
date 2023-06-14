#include<stdio.h>
main(){
	int sum=0,i,num,rem;
	printf("Enter Number:");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		num=num/10;
		sum=rem	+sum;
		
	}
	printf("Sum=%d",sum);
}