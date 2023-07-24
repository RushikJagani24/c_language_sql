#include<iostream>
using namespace std;
class A
{
	public:
		void print()
		{
			cout<<"Rushik"<<endl;
		}
};
class B:public A
{
	public:
		void print1()
		{
			cout<<"Jagani"<<endl;
		}
};
class C:public B
{
	public:
		void print3()
		{
			cout<<"Rushik Jagani."<<endl;
		}
};
main()
{
		C obj;
		obj.print();
		obj.print1();
		obj.print3();
}