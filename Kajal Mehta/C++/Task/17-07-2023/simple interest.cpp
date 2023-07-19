#include<iostream>
using namespace std;
class math
{
	public:
		int p,r,n;
		float i;
		void cal()
		{
			cout<<"Enter Principal:";
			cin>>p;
			cout<<"Enter Rate:";
			cin>>r;
			cout<<"Enter Number of year:";
			cin>>n;
		
			i=(p*r*n)/100;
			cout<<"Answer:"<<i;
		}
};
main()
{
	math obj;
	obj.cal();
}