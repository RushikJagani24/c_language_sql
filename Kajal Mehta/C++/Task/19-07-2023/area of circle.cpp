#include<iostream>
using namespace std;
class circle
{
	public:
		int r;
		float pi=3.14,area;
		
		void store()
		{
			cout<<"Enter range:";
			cin>>r;
		}
		void answer()
		{
			cout<<"Answer:"<<r*r*pi;
		}
	
};
main()
{
	circle obj;
	obj.store();
	obj.answer();
}