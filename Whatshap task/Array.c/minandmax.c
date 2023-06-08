#include<stdio.h>
main(){
	int a[10];
	int i,max=0,min;
	printf("Enter the element of array..............\n");
	for(i=0;i<10;i++){
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	max=a[i];
	min=a[i];
	for(i=0;i<10;i++){
		if(a[i]>max){
		max=a[i];
	}
	if(min>a[i]){
			min=a[i];
		}
}	
	printf("\n\nMaximum=%d",max);
	printf("\nMinimum=%d",min);
}