#include<iostream>
using namespace std;
class vehicle
{
	public:
		int max_speed,wheel;
		void get()
		{
			cout<<"Enter Car Wheel :";
			cin>>wheel;
			cout<<"Enter Car Maximum speed:";
			cin>>max_speed;
		}
};
class fuel
{
	public:
		string fuel_type;
		void get2()
		{
			cout<<"Enter Fuel Type:";
			cin>>fuel_type;
	
		}
};
class car:public vehicle,public fuel
{
	public:
		void display()
		{
			cout<<"Car Wheel Number:"<<wheel<<endl;
			cout<<"Car Maximum Speed:"<<max_speed<<endl;
			cout<<"Car Fuel Type:"<<fuel_type<<endl;
		}
};
main()
{
	car c;
	c.get();
	c.get2();
	c.display();
	
}