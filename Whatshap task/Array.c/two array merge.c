#include<stdio.h>
main(){
	int a[5],b[5],c[10];
	int i,j,temp=0;
	printf("Enter element of array .......\n");
	for(i=0;i<5;i++){
		printf("\nEnter a[%d]",i);
		scanf("\n%d",&a[i]);
	}
	for(j=0;j<5;j++){
		printf("\nEnter b[%d]",j);
		scanf("\n%d",&b[j]);
	}
	for(i=0;i<5;i++){
		c[i]=a[i];
	}
	for(j=0;j<5;j++){
		c[i]=b[j];
		i++;
	}
	   for(i=0;i<5-1; i++) {
           for(j=i+1;j<5;j++) {
               if(a[i]>b[j])
                 {
                	temp=a[i];
                   a[i]=b[j];
                   b[j]=temp;
                 } 
                 
              
          
		for(i=0; i<10; i++) {
        printf("c[%d]=%d ",i,1
		23
		3c[i]);
    }
	printf("\n\n");                     

}}}