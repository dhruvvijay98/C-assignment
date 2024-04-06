#include<iostream>
using namespace std;

class A
{
	public:
	int c;
	public:
	int a;
	public:
	int b;
	public:
	void display()
	{
		cout<<"in display of A\n";
	}
};

class B:public A
{
	public:
	void show()
	{
    	display();
		cout<<a<<b;
	}
};

class C:public A
{
	public:
	void show()
	{
		display();
		cout<<a<<b;
		cout<< a<<b;
	}
};

int main()
{
	C bobj;
	bobj.show();
	bobj.display();
}

