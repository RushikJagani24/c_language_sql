#include<iostream>
using namespace std;
class shape
{
	public:
		int w,h;
		void get()
		{
			cout<<"Enter Weight:";
			cin>>w;
			cout<<"Enter Height:";
			cin>>h;
		}
};
class rectangle:public shape
{
	public:
		int area;
		void print()
		{
			area=w*h;
			cout<<"Area of rectangle:"<<area<<endl;
		}
};
main()
{
	rectangle obj;
	obj.get();
	obj.print();
}