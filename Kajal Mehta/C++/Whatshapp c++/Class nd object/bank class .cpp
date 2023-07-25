#include<iostream>
using namespace std;
class bank
{
	public:
		int ac,bal;
		void get()
		{
			cout<<"Enter Account:";
			cin>>ac;
			cout<<"Enter Balance:";
			cin>>bal;
		}
		void print()
		{
			cout<<"Account no.: "<<ac<<endl<<"Balance:"<<bal;
		}
};
main()
{
	bank obj;
	obj.get();
	obj.print();
	
}