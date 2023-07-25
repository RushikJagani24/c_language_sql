#include<iostream>
using namespace std;
class vehical
{
	public:
		int max_speed,wheel;
		void get()
		{
			cout<<"Enter Maximum Speed:";
			cin>>max_speed;
			cout<<"Enter Wheel:";
			cin>>wheel;
		}
};
class car:public vehical
{
	public:
		int door;
		void get2()
		{
			cout<<"Enter Number of Doors:";
			cin>>door;
		}
};
class sport_car:public car
{
	public:
		int top_speed;
		void get3()
		{
			cout<<"Enter Top Speed:";
			cin>>top_speed;
		}
		void print()
		{
			cout<<"Maximum Speed:"<<max_speed<<endl;
			cout<<"Number Of Wheel:"<<wheel<<endl;
			cout<<"Number of Dooe:"<<door<<endl;
			cout<<"Vehicle Top Speed:"<<top_speed;
		}
};
main()
{
	sport_car c;
	c.get();
	c.get2();
	c.get3();
	c.print();
}