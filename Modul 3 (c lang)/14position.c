#include<stdio.h>
main(){
	int a[5];
	int i,choice;
	for(i=0;i<5;i++){
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}

		printf("Enter choice:");
		scanf("%d",&choice);
			for(i=0;i<5;i++){
				if(a[i]=choice){
		printf(" a[%d]=%d",i,a[i]);
	}}
	
}