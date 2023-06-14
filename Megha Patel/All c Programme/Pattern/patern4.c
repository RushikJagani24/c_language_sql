#include<stdio.h>
main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf(" %d%d",i,j);
		}
		printf("\n");
	}
}
/* 11
 21 22
 31 32 33
 41 42 43 44
 51 52 53 54 55*/