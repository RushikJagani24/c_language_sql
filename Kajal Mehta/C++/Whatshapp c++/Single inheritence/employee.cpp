#include<iostream>
using namespace std;
class employee
{
	public:
	int e_id,salary;
	void get()
	{
		cout<<"Enter Employee id:";
		cin>>e_id;
		cout<<"Enter Employee Salary:";
		cin>>salary;
		}	
};
class manager:public employee
{
	public:
		int no_emp,m_id,m_salary;
		void get2()
		{
			cout<<"Enter Number of Employee:";
			cin>>no_emp;
			cout<<"Enter Manager id:";
			cin>>m_id;
			cout<<"Enter Manager Salary:";
			cin>>m_salary;
		}
		void print()
		{
			cout<<"Employee Id:"<<e_id<<endl;
			cout<<"Employee Salary:"<<salary<<endl;
			cout<<"Employee of Number:"<<no_emp<<endl;
			cout<<"Manager Id:"<<m_id<<endl;
			cout<<"Manager salary:"<<m_salary;
		}
};
main()
{
		manager obj;
		obj.get();
		obj.get2();
		obj.print();
}