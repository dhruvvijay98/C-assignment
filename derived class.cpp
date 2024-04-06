#include<iostream>
using namespace std;
class Parent
{
	public:
		int id_pro=6;
		
		void display()
	    {
	   		cout<<id_pro<<endl;
	    }
};
class Child: public Parent
{
	public:
		int id_c;
		void display()
	    {
	   		cout<<id_pro<<endl;
	    }
	    
		void show()
		{
			id_pro= 10;
			cout<<id_pro;
		}
};

int main()
{
	Parent obj;
	obj.display();
	Child obj1;
	obj1.show();
	obj1.display();
	obj1.id_c=10;
	cout<<obj1.id_c;
}
