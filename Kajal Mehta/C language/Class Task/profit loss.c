#include<stdio.h>
main()
{
	int profit,loss,sell,cost;
	printf("Enter sell Price:");
	scanf("%d",&sell);
	printf("Enter Cost:");
	scanf("%d",&cost);
	if(sell>cost)
	{
		profit=sell-cost;
		printf("Profit %d",profit);
	}
	else
	{
			loss=cost-sell;
			printf("Loss %d",loss);
	}


}