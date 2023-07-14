#include<stdio.h>
main()
{
	int a[5],i,n,j,temp;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);	
	}
n
	for(i=0;i<n;i++)
	{
		for(j=i+0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}

	
}