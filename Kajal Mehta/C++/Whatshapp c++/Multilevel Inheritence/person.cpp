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
			cout<<"Enter Age:";
			cin>>age;
		}
};
class employee:public person
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
class manager:public employee
{
	public:
		int no_emp;
		void get3()
		{
			cout<<"Enter Employee number:";
			cin>>no_emp;
		} 
		void set()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"Employee id:"<<e_id<<endl;
			cout<<"Employee Salary:"<<e_salary<<endl;
			cout<<"Number of Employee:"<<no_emp<<endl;
		}
};
main()
{
	manager obj;
	obj.get();
	obj.get2();
	obj.get3();
	obj.set();
}