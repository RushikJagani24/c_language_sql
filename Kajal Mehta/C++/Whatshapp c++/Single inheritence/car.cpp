#include<iostream>
using namespace std;
class vehicle
{
		public:
			int wheel,max_speed;
			void get()
			{
				cout<<"Enter Number of Wheels:";
				cin>>wheel;
				cout<<"Enter Maximum Speed:";
				cin>>max_speed;
			}
};
class car:public vehicle
{
	public:
		void display()
		{
			cout<<"Number of wheel:"<<wheel<<endl;
			cout<<"Maximum Speed:"<<max_speed;
		}
};
main()
{
	car obj;
	obj.get();
	obj.display();
}