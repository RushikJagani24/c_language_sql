#include<iostream>
using namespace std;
class math
{
	public:
		int a=10,b=30,temp;
		void swap()
		{
			a=a+b;
			b=a-b;
			a=a-b;;
			cout<<"A:"<<a<<endl<<"B:"<<b;
		}
};
main()
{
	math obj;
	obj.swap();
}