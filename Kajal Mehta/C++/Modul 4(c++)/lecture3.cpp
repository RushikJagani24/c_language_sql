#include<iostream>
using namespace std;
class lecture
{
	public:
		string l_name,s_name;
		int c_no;
		void get()
		{
			cout<<"Enter Lecture Name:";
			cin>>l_name;
			cout<<"Enter Subject Name:";
			cin>>s_name;
			cout<<"Enter c_no:";
			cin>>c_no;			
		}
		public:
		void print()
		{
			cout<<"Lecture Name:"<<l_name<<endl;
			cout<<"Subject Name:"<<s_name<<endl;
			cout<<"Course Number:"<<c_no<<endl;
		}	
};
main()
{
	lecture l;
	l.get();
	l.get();
	l.get();
	l.get();
	l.get();
	l.print();
	l.print();
	l.print();
	l.print();
	l.print();
}