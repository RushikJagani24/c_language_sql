#include<stdio.h>
main(){
	int a[10];
	int i,max=0;
	for(i=0;i<10;i++){
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	max=a[i];
	for(i=0;i<10;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("Maximum=%d",max);
}