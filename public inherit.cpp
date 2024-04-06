#include<iostream>
using namespace std;

class A
{
	public:
		int x=10;
		int y=20;
		int z=30;	
		void display()
		{
			cout<<x<<endl;
		}
};

class B : public A
{
	public:
	void show()
	{
		display();
		cout<<y<<"\t"<<z<<endl;
	}
};

class C: public B
{
	public:
		void print()
		{
			cout<<x<<endl;
			cout<<y<<endl;
			cout<<z<<endl;
			show();
		}
};

int main()
{
	C c1;
	c1.show();
	c1.print();
	c1.display();
}
