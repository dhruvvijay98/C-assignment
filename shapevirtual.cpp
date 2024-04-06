#include<iostream>
using namespace std;
class Shape
{
	public:
	virtual void area()=0;
	
};
class Circle: public Shape
{
	int rad=1;
	double pi=3.14;
	public:
	void area()
	{
		double a= pi*rad*rad;
		cout<<a<<endl;
	}
};
class Rectangle: public Shape
{
	int l=10;
	int b=20;
	public:
		void area()
		{
			double a= l*b;
			cout<<a<<endl;
		}
};
int main()                                                      
{
	Shape * sptr=new Rectangle;
	Shape * ptr=new Circle;
	sptr->area();
	ptr->area();
}
