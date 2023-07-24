#include<iostream>
using namespace std;
class person
{
	public:
		int age;
		string name;
		void get()
		{
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter Age:";
			cin>>age;
		}
		void print()
		{
			cout<<"Name: "<<name<<endl<<"Age:"<<age;
		}
};
main()
{
	person obj;
	obj.get();
	obj.print();
	
}