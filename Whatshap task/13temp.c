#include<stdio.h>
main(){
		int temp;
		printf("Enter Temprature:");
		scanf("%d",&temp);
		{
		if(temp<0){
			printf("Freezing weather");
		}
		else if(temp<=10){
			printf("Very Cold Weather");
		}
		else if(temp<=20){
			printf("Cold weather");
		}
		else if(temp<=30){
			printf("Normal");
		}
		else if(temp<=40){
			printf("Hot");
		}
		else if(temp>=40){
			printf("Very Hot");
		}
		else
		{
			printf("Please Enter Valid Tempreture...");
		}
	}
}