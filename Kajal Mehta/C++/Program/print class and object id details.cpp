#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
		void detail()
		{
			cout<<"Enter id:";
			cin>>id;
			cout<<"Enter Name:";
			cin>>name;	
		};
		void print()
		{
			cout<<"ID:"<<id<<endl<<"Name:"<<name;
		}
	
};
main()
{
	student obj;
	obj.detail();
	obj.print();
}