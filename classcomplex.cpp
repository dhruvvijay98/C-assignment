#include<iostream>
using namespace std;
class MyComplex
{
	int real,img;
	public:
		void setComplex(int,int);
		void display();
		void setReal(int);
		int getImg();
};
void MyComplex::setComplex(int r,int i)
{
	real=r;
	img=i;
}
void MyComplex::display()
{
	cout<<real<<"+"<<img<<"i"<<endl;
}
void MyComplex::setReal(int r)
{
	real=r;
}
int MyComplex::getImg()
{
	return img;
}
int main()
{
	MyComplex c;
	c.setComplex(8,9);
	c.display();
	c.setReal(10);
	c.display();
	int i= c.getImg();
	cout<<"img part is"<<i<<endl;
}
