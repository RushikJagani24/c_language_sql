#include<stdio.h>
int fibonacci(int a);
	int x,y,ans;
main(){
	int i;
	for(i=1;i<=10;i++){
		ans=x+y;
		printf("%d",ans);
		x=y;
		y=ans;
	}	printf("fibonacci series %d %d",x,y);
}