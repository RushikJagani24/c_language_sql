#include<stdio.h>
main(){
	int a[5];
	int i;
	printf("Enter element of aary:");
	for(i=0;i<5;i++){
		printf("Enter a[%d]",i);
	scanf("%d",&a[i]);
}
	printf("\nAll Even Element..");
	for(i=0;i<5;i++){
		if(a[i]%2==0){
			printf("\neven =%d",a[i]);
		}
		}
		printf("\nAll Odd Element..");
		for(i=0;i<5;i++){
		if(a[i]%2==1){
			printf("\nOdd =%d",a[i]);
		}
		}
		
	}
	

