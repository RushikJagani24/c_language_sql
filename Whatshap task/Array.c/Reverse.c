#include<stdio.h>
main(){
	int a[3];
	int i,rem,num,rev=0;
	printf("\nEnter Element of Array...\n");
	for(i=0;i<3;i++){
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
		while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		a[i]=num/10;
	}
	}
	for(i=0;i<3;i++){
		printf("%d",rev);
	}
	
}