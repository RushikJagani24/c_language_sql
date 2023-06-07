#include<stdio.h>
//1.with return type with parameter
int square(int num){
	int sq;
	sq= num*num;
	return sq;
}
//2.with return type without parameter
int areaofSquare(){
	int l,ans;
	printf("\n enter L");
	scanf("%d",&l);
	ans=l*l;
	return ans;
}
//3. without return type without parameter
void printCname(){
	printf("\n Comapny Name:Tops ");
}
//4.without return type with parameter
void addition(int a, int b){
	int c;
	c=a+b;
	printf("\n addition of %d + %d = %d",a,b,c);
}

main(){
	int ans=square(5);
	printf("\n square of 5=%d",ans);
	printf("\n square of 10=%d",square(10));
	printf("\n area of square=%d",areaofSquare());
	printCname();
	addition(100,200);
}
