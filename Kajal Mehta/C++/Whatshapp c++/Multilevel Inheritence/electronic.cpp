#include<iostream>
using namespace std;
class device
{
	public:
		int p_r;
		string brand;
		void get()
		{
			cout<<"Enter Brand name:";
			cin>>brand;
			cout<<"Enter Power Rate:";
			cin>>p_r;
		}
}; 
class E_device:public device
{
	public:
		int voltage;
		void get2()
		{
			cout<<"Enter Voltage:";
			cin>>voltage;
		}
};
class television:public E_device
{
	public:
		string screen_size;
		void get3()
		{
			cout<<"Enter Screen Size:";
			cin>>screen_size;
		}
		void display()
		{
			cout<<"Brand Name:"<<brand<<endl;
			cout<<"Power Rating:"<<p_r<<endl;
			cout<<"Volatge:"<<voltage<<endl;
			cout<<"Screen size:"<<screen_size<<endl;
		}
};
main()
{
	television t;
	t.get();
	t.get2();
	t.get3();
	t.display();
}