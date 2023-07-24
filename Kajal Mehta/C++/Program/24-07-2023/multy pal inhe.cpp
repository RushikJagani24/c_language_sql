#include<iostream>
using namespace std;
class mom
{
	public:
		int pocket_money;
		void take1()
		{
			cout<<"Enter Pocket_Money mom:";
			cin>>pocket_money;
		}
		void print()
		{
			cout<<"Mom pocket money:"<<pocket_money<<endl;
		}
};
class dad
{
		public:
		int pocket_money2;
		void take2()
		{
			cout<<"Enter Pocket_Money Dad:";
			cin>>pocket_money2;
		}
		void print2()
		{
			cout<<"Dad pocket money:"<<pocket_money2<<endl;
		}
};
class child:public mom,public dad
{
	public:
		int total;
		void print3()
		{
			total=pocket_money+pocket_money2;
			cout<<"Total Money="<<total;
		}
};
main()
{
	child c;
	c.take1();
	c.take2();
	c.print();
	c.print2();
	c.print3();
}