#include<iostream>
using namespace std;
class person
{
	public:
		string name;
		int age;
		void get()
		{
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter age:";
			cin>>name;
		}
};
class student
{
	public:
		int salary;
		void percentage()
		{
			cout<<"Enter Salary:";
			cin>>salary;
		}
};
class detail:public person,public student
{	
		public:
			void print()
			{
				cout<<"Name:"<<name<<endl;
				cout<<"Age:"<<age<<endl;
				cout<<"Salary:"<<salary<<endl;
			}
};
main()
{
	detail p;
	p.get();
	p.percentage();
	p.print();
}