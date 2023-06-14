#include<stdio.h>
main(){
	int a[5];//={1,5,3,9,7};
	int i,j,temp=0;
	for(i=0;i<5;i++){
		printf("Enter a[%d]",i);
	//scanf("%d",&a[i]);
		for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	}
	for(i=0;i<5;i++){
		printf("\na[%d]=%d",i,a[i]);
	}
}