#include<iostream>
using namespace std;
class demo 
{
	int x;
	public:
	demo(int y)
	{
		x=y;
	}		
	void display()
	{
		cout<<"HELLO"<<endl<<x<<endl;
	}
};
main()
{
	demo obj1(1000);
	demo obj2(obj1);
	obj1.display();
	obj2.display();
}