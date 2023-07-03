#include<stdio.h>
main()
{	
	int m,e,g,s,se,total;
	float per;
	printf("Enter m And e And g And s And se:");
	scanf("%d %d %d %d %d",&m,&e,&s,&g,&se);
	total=m+e+s+g+se;
	per=total/5;
	printf("\nTotal:%d",total);
	printf("\nPercentage:%.2f",per);
}