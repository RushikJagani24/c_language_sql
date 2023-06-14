#include<stdio.h>
main(){
	int i,num,rem,sum=0;
	printf("Enter Number:");
	scanf("%d",&num);
	i=num%10;
	while(num>0){
		rem=num%10;
		num=num/10;
	}
	sum=i+rem;
	printf("Sum=%d",sum);
}