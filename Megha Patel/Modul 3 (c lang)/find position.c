#include <stdio.h>
main()
{
    int arr[10],i,n,ele;
   
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
    	printf("Enter array elements: ");
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &ele);
     
    for(i=0; i<n; i++)
    {
        if(arr[i]==ele)
        {
	  		  printf("%d found at position %d", ele, i+1);	 
        }
	}

}