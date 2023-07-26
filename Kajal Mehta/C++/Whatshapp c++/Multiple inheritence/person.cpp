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
};
class employee
{
	public:
		int e_id,e_salary;
		void get2()
		{
			cout<<"Enter Employee id:";
			cin>>e_id;
			cout<<"Enter Employee Salary:";
			cin>>e_salary;
			
		}
};
class manager:public person,public employee
{
	public:
		void print()
		{
			cout<<"Person Name:"<<name<<endl;
			cout<<"Person Age:"<<age<<endl;
			cout<<"Employee Id:"<<e_id<<endl;
			cout<<"Employee Salary:"<<e_salary<<endl;
		}
};
main()
{
	manager o;
	o.get();
	o.get2();
	o.print();
}