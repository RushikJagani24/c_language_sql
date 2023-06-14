#include<stdio.h>
float circle(int r);
main(){
	int r;
	float a,b=3.14;
	printf("Enter radious=");
	scanf("%d",&r);
	a=circle(r);
	printf("Circle=%.2f",a);
                  
	return 0;	
}
 float circle(int r){
	return 3.14*r*r;
}       