#include<iostream>
using namespace std;
class cus_detail
{
	public:
		int acc_no,cur_bal;
		string c_name,acc_type;
		void get1()
		{
			cout<<"Enter Customer Name:";
			cin>>c_name;
			cout<<"Enter Account Number:";
			cin>>acc_no;
			cout<<"Enter Current Balence:";
			cin>>cur_bal;
			cout<<"Enter Account type:";
			cin>>acc_type;
		}
};
class sav_acc:public cus_detail
{
	public:
		int total,r,y,withdraw;
		void get2()
		{
			cout<<"Enter Withdraw Amount:";
			cin>>withdraw;
			total=cur_bal-withdraw;
			cout<<"Enter Rate:";
			cin>>r;
			cout<<"Enter Year:";
			cin>>y;
			
		}
};
class cur_acc:public sav_acc
{
	public:
		string chq_opt;
		void get3()
		{
			cout<<"Enter Cheque Option:y || n:";
			cin>>chq_opt;
		}
		void print()
		{
			cout<<"Customer Name:"<<c_name<<endl;
			cout<<"Account Number:"<<acc_no<<endl;
			cout<<"Current Balence:"<<cur_bal<<endl;
			cout<<"Account type:"<<acc_type<<endl;
			cout<<"Withdraw Amount:"<<withdraw<<endl;
			cout<<"Simple Interest:"<<(total*r*y)/100;
			cout<<"Cheque Option:"<<chq_opt<<endl;
		}
		
};
main()
{
	sav_acc s;
	s.get1();
	s.get2();
	cur_acc c;
	c.get3();
	c.print();
}