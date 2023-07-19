#include<iostream>
using namespace std;
class math
{
	public:
		int r;
		float area,pi=3.14;
		void circle()
		{
			cout<<"Enter range:";
			cin>>r;
			area=pi*r*r;
			cout<<"Answer:"<<area;
		}
};
main()
{
	math obj;
	obj.circle();
}