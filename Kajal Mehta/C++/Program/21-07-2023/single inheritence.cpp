#include<iostream>
using namespace std;
class add
{
	public:
		int a,b;
		void sum()
		{
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter B:";
			cin>>b;
		}
		void print()
		{
			
		}
};
class mul:public add
{
	public:
		int x,y;
		void mult()
		{
			cout<<"Enter x:";
			cin>>x;
			cout<<"Enter y:";
			cin>>y;
		}
		void printf()
		{
			cout<<"Addition:="<<a+b;
			cout<<"Multiplication:="<<x*y;
		}
};
main()
{
	mul obj;
	obj.sum();
	obj.print();
	obj.mult();
	obj.printf();
	
}