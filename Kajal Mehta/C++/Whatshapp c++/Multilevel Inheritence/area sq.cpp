#include<iostream>
using namespace std;
class shape
{
	public:
		int w,h;
		void get()
		{
			cout<<"Enter Width:";
			cin>>w;
			cout<<"Enter Height:";
			cin>>h;
		}
};
class rectangle:public shape
{
	public:
		int area;
		void set()
		{
			area=w*h;
			cout<<"Area of Rectangle:"<<area<<endl;
		}
};
class sqaure:public rectangle
{
	public:
		int sq;
		void print()
		{
			sq=area*area;
			cout<<"Sqaure="<<sq<<endl;
		}
};
main()
{
		sqaure o;
		o.get();
		o.set();
		o.print();
}