#include<iostream>
using namespace std;
class rect
{
	public:
		int l,w;
		rect()
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
	rect obj;
	obj.print();
}