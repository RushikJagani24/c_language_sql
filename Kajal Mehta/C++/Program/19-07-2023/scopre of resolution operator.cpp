#include<iostream>
using namespace std;
class demo
{
	public:
	int a,b;
	void get();
	void print();
};
void demo::get()
{
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
}
void demo::print()
{
	cout<<"A:="<<a<<endl<<"B:="<<b;
}

main()
{
	demo obj;
	obj.get();
	obj.print();
}