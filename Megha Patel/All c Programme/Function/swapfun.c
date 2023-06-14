#include<stdio.h>
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n in afte a=%d \t b=%d",*a,*b);
}
main(){
	int a=10,b=20;
	swap=(&a,&b);
	printf("\n after swapping a=%d nd b=%d",a,b);
	}