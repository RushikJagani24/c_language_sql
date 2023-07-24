#include<iostream>
using namespace std;
class circle
{
	public:
		int r;
		float pi=3.14;
		void area()
		{
			cout<<"Enter Range:";
			cin>>r;
		}
		void print()
		{
			cout<<"Answer Is: "<<pi*r*r;
		}
};
main()
{
	circle obj;
	obj.area();
	obj.print();
	
}