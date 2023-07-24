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
			cout<<"Enter age:";
			cin>>age;
		}
};
class student:public person
{
	public:
		string grade;
		void get1()
		{
			cout<<"Enter grade:";
			cin>>grade;
		}
		void print()
		{
			cout<<"Name:"<<endl<<"Age:"<<age<<endl<<"Grade:"<<grade;
			}	
	
};
main()
{
	student obj;
	obj.get();
	obj.get1();
	obj.print();
}
