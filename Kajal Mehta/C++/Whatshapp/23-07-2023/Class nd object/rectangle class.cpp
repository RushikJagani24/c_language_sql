#include<iostream>
using namespace std;
class rectangle
{
	public:
		int l,w;
		void area()
		{
			cout<<"Enter Widhth:";
			cin>>w;
			cout<<"Enter Length:";
			cin>>l;
		}
		void print()
		{
			cout<<"Answer Is: "<<l*w;
		}
};
main()
{
	rectangle obj;
	obj.area();
	obj.print();
	
}