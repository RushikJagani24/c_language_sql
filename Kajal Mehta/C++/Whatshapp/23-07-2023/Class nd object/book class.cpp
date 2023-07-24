#include<iostream>
using namespace std;
class book
{
	public:
		string title,author;
		void get()
		{
			cout<<"Enter Title:";
			cin>>title;
			cout<<"Enter Author:";
			cin>>author;
		}
		void print()
		{
			cout<<"Title: "<<title<<endl<<"Author:"<<author;
		}
};
main()
{
	book obj;
	obj.get();
	obj.print();
	
}