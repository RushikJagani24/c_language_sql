#include<iostream>
using namespace std;
class math
{
	public:
		int a=10,b=30,temp;
		void swap()
		{
			temp=a;
			a=b;
			b=temp;
			cout<<"A:"<<a<<endl<<"B:"<<b;
		}
};
main()
{
	math obj;
	obj.swap();
}