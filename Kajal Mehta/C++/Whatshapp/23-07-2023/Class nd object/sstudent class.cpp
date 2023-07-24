#include<iostream>
using namespace std;
class student
{
	public:
		int age,rn;
		string name;
		void get()
		{
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter Age:";
			cin>>age;
			cout<<"Enter roll no:";
			cin>>rn;
		}
		void print()
		{
			cout<<"Name: "<<name<<endl<<"Roll no:"<<rn<<endl<<"Age:"<<age;
		}
};
main()
{
	student obj;
	obj.get();
	obj.print();
	
}