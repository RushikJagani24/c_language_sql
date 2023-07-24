#include<iostream>
using namespace std;
class demo
{
	private:
	int x,y;
	public:
		demo(int a,int b)
		{
			x=a;
			y=b;
		}
		void print()
		{
			cout<<x<<endl<<y;
		}
};
main()
{
	demo obj(10,20);
	obj.print();
}