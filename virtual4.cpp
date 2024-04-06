#include<iostream>
using namespace std;

class Base
{
	public:
		virtual void Function1()
		{
			cout<<"Inside Base Function1"<<endl;
		}
		
		virtual void Function2()
		{
			cout<<"Inside Base Function2"<<endl;
		}
		
		virtual void Function3()
		{
			cout<<"Inside Base Function3"<<endl;
		}
		
		virtual ~Base()
		{
			cout<<"Inside Base Destructor"<<endl;
		}
};

class Derived1: public Base
{
	public:
	void Function1()
	{
		cout<<"Inside Derived1 Function1"<<endl;
	}
	
	~Derived1()
	{
		cout<<"Inside Derived1 Destructor"<<endl;
	}
};

class Derived2: public Derived1
{
	public:
	void Function2()
	{
		cout<<"Inside Derived2 Function2"<<endl;
	}
	
	~Derived2()
	{
		cout<<"Inside Derived2 Destructor"<<endl;
	}
};

class Derived3: public Derived2
{
	public:
	void Function3()
	{
		cout<<"Inside Derived3 Function3"<<endl;
	}
	
	~Derived3()
	{
		cout<<"Inside Derived3 Destructor"<<endl;
	}
};

int main()
{
	Base * ptr = new Base();
	Base * ptr1 = new Derived1();
	Base * ptr2 = new Derived2();
	Base * ptr3 = new Derived3();
	
	
	ptr->Function1();
	ptr->Function2();
	ptr->Function3();
	
	ptr1->Function1();
	ptr1->Function2();
	ptr1->Function3();
	
	ptr2->Function1();
	ptr2->Function2();
	ptr2->Function3();
	
	ptr3->Function1();
	ptr3->Function2();
	ptr3->Function3();
	
	delete ptr;
	delete ptr1;
	delete ptr2;
	delete ptr3;
	
	return 0;
		
}
