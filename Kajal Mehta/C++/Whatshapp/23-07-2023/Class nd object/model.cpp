#include<iostream>
using namespace std;
class car
{
	public:
		int model;
		string make;
		void get()
		{
			cout<<"Enter Make:";
			cin>>make;
			cout<<"Enter model:";
			cin>>model;
		}
		void print()
		{
			cout<<"Make: "<<make<<endl<<"Model:"<<model;
		}
};
main()
{
	car obj;
	obj.get();
	obj.print();
	
}