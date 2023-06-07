#include<stdio.h>
main(){
	int a[5];
	int i,j,temp;
	printf("\nEnter array of Element........\n");
	for(i=0;i<5;i++){
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(a[j]<a[i]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("\na[%d]=%d",i,a[i]);
	}
}