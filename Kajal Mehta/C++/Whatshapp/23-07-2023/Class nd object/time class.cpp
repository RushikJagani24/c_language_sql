#include<iostream>
using namespace std;
class time
{
	public:
		int h,m,s;
			void get()
		{
			cout<<"Enter Hours:";
			cin>>h;
			cout<<"Enter minit:";
			cin>>m;
			cout<<"Enter second:";
			cin>>s;
		}
		void print()
		{
			cout<<h<<":"<<m<<":"<<s;
		}
};
main()
{
	time obj;
	obj.get();
	obj.print();
	
}