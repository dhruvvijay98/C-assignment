#include<iostream>
using namespace std;
class A
{
		int i=2;
	public:

	void show()
	{
		cout<<i<<endl;
	}
};
class B: public A
{
	public:
		int y=10;
		void display()
		{
			show();		
		}
};

int main()
{
	B obj;
	cout<<obj.y<<endl;
	obj.show();
	obj.display();
}
