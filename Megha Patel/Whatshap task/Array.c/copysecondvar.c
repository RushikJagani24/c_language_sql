#include<stdio.h>
main(){
	int a[5],b[5];
	int i,j;
	printf("\nEnter array of Element:\n");
	for(i=0;i<5;i++){
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("\na[%d]=%d",i,a[i]);
	}
	printf("\n\nCopy Elmenet of Array...\n");
	for(i=0;i<5;i++){
		printf("\nb[%d]=%d",i,a[i]);
	}
}