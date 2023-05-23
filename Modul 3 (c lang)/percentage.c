#include<stdio.h>
main(){
	int s1,s2,s3,s4,s5,total,per;
	printf("Enter s1:");
	scanf("%d",&s1);
	printf("Enter s2:");
	scanf("%d",&s2);
		printf("Enter s3:");
	scanf("%d",&s3);
		printf("Enter s4:");
	scanf("%d",&s4);
		printf("Enter s5:");
	scanf("%d",&s5);
	
	total=s1+s2+s3+s4+s5;
	per=total/5;
	if(per>75){
		printf("Distintion..");
	}
	else if(per>60 && per<=75){
		printf("First class...");
	}
	else if(per>50 && per<=60){
		printf("Second class...");
	}
	else if(per>35 && per<=50){
		printf("Third Class..");
	}
	else
	{
		printf("Fail....");
	}
}