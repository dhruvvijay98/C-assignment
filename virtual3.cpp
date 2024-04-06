#include<iostream>
using namespace std;

class Base
{
	public:
		
		virtual void print()
		{
			cout<<"Inside base print"<<endl;
		}
		
		virtual void invoke()
		{
			cout<<"Inside base invoke"<<endl;
			this->print();
		}
};

class Derived:public Base
{
	public:
		
		void print()
		{
			cout<<"Inside derived print"<<endl;
		}
		
		void invoke()
		{
			cout<<"Inside derived invoke"<<endl;
			this->print();
		}
};

int main()
{
	Base * b = new Derived;
	b->print();
	b->invoke();
	return 0;
	
	
}
