#include<stdio.h>
int factorial(int num){
	int fact;
	if(num==1){
		return 1;
	}
	fact=num*factorial(num-1);
	return fact;
}
main(){
	printf("Factorial of 5=%d",factorial(5));
}