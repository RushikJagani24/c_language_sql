#include<stdio.h>
main(){
	int a[5];
	int i,sum=0;
	for(i=0;i<5;i++){
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Sum of Array element=%d",sum);
	
}