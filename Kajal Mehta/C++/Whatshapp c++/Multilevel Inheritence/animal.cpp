#include<iostream>
using namespace std;
class animal
{
	public:
		string species,habitat;
		void anml()
		{
			cout<<"Enter Animal Species:";
			cin>>species;
			cout<<"Enter Animal Habitat:";
			cin>>habitat;
		}
};
class bird:public animal
{
	public:
	int wingspan;
	void get()
	{
		cout<<"Enter Bird Wingspan:";
		cin>>wingspan;
	}
};
class eagle:public bird
{
	public:
		string hunt_sty;
		void get1()
		{
			cout<<"Enter Animal Hunting style:";
			cin>>hunt_sty;
		}
		void set()
		{
			cout<<"Animal Species:"<<species<<endl;
			cout<<"Animal Habitat:"<<habitat<<endl;
			cout<<"Bird wingspan:"<<wingspan<<endl;
			cout<<"Animal Hunting_style:"<<hunt_sty<<endl;			
		}
};
main()
{
	eagle obj;
	obj.anml();
	obj.get();
	obj.get1();
	obj.set();
}