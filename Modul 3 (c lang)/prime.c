#include<stdio.h>
main(){
	int num,flag=0,i;
	printf("Enter Number:");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			flag=1;
	}
}
	(flag==0)?printf("Prime"):printf("Not Prime");

}