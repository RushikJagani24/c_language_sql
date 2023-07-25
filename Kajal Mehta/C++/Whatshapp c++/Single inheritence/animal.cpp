#include<iostream>
using namespace std;
class animal
{
	public:
		void makesound()
		{
			cout<<"Sound is bhav bhav..";
		}
};
class dog:public animal
{
	
	
};
main()
{
	dog obj;
	obj.makesound();
}