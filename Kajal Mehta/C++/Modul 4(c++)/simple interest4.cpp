#include<iostream>
using namespace std;
class si
{
	public:
		int p,n;
		float r,i;
		si()
		{
			cout<<"Enter Principal:";
			cin>>p;
			cout<<"Enter Rate of Ammount:";
			cin>>r;
			cout<<"Enter number of time:";
			cin>>n;
		}
		void answer()
		{
			i=p*r*n/100;
			cout<<"Simple Interest:"<<i;
		}
};
main()
{
	si obj;
	obj.answer();
}