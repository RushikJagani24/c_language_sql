/* with return type without parameter*/
#include<stdio.h>
float circle();
main()
{
	int r=10;
	int area=3.14*r*r;
	printf("Area =%d",area);
}
float circle()
{
	return 0;
}