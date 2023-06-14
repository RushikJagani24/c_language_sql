#include<stdio.h>
main(){
	int ch,r,l,b,rect,height,base;
	float crcl,tri;
	printf("\nPress 1 for area of Circle");
	printf("\nPress 2 for area of Rectangle");
	printf("\nPress 3 for area of Triangle");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	
	switch(ch){
	
	
	case 1:
		printf("\nEnter radious:");
		scanf("%d",&r);
		crcl=3.14*r*r;
		printf("\nCircle=%f",crcl);
		break;
	case 2:
		printf("\nEnter L & B");
		scanf("%d %d",&l,&b);
		rect=l*b;
		printf("\nRectangle=%d",rect);
		break;
	case 3:
		printf("\nEnter Height & Base");
		scanf("%d %d",&height,&base);
		tri=(height*base)/2;
		printf("\nTriangle=%f",tri);
		break;
	default:
		printf("\nWrong Choice.......");
		break;
}
}