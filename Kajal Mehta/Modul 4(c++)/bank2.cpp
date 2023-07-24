#include<iostream>
using namespace std;
class bank
{
	public:
		string d_name,acc_type;
		int acc_no,acc_bal;
		void get()
		{
			cout<<"Enter Depositery Name:";
			cin>>d_name;
			cout<<"Enter Account type:";
			cin>>acc_type;
			cout<<"Enter Account Number:";
			cin>>acc_no;
			cout<<"Enter Account current Balence:";
			cin>>acc_bal;
		}
};
class after_bank:public bank
{
	public:
		int depo_amt,withdraw,total;
		void get2()
		{
			cout<<"Enter Deposite Amount:";
			cin>>depo_amt;
			cout<<"Enter withdraw amount:";
			cin>>withdraw;
			cout<<"Depositery Name:"<<d_name<<endl;
			cout<<"Account Type:"<<acc_type<<endl;
			cout<<"Account Number:"<<acc_no<<endl;
			cout<<"Account Balance:"<<acc_bal<<endl;
			total=acc_bal+depo_amt-withdraw;
			cout<<"Toatl Account Balence:"<<total;
		}
};
main()
{
	after_bank obj;
	obj.get();
	obj.get2();
}