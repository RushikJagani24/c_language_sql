#include<iostream>
using namespace std;
class bank_acc
{
	public:
		int acc_bal,acc_no;
		void get()
		{
			cout<<"Enter Account Number:";
			cin>>acc_no;
			cout<<"Enter Account Balance:";
			cin>>acc_bal;
		}
};
class int_rate
{
	public:
		float rate;
		void get2()
		{
			cout<<"Enter interset Rate:";
			cin>>rate;
		}
};
class saving_acc:public bank_acc,public int_rate
{
	public:
		void print()
		{
			cout<<"Account Number:"<<acc_no<<endl;
			cout<<"Account Balence:"<<acc_bal<<endl;
			cout<<"Interest Rate:"<<rate<<endl;
		}
};
main()
{
	saving_acc s;
	s.get();
	s.get2();
	s.print();
}