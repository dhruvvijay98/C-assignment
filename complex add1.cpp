#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
		Complex()
		{
			
		}
		void setData(int r,int i)
		{
			real=r;
			img=i;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		Complex add(Complex &c)
		{
			Complex temp;
			temp.real= this->real+c.real;
			temp.img= this->img+c.img;
			return temp;
		}
};
int main()
{
	Complex c1;
	Complex c2;
	c1.setData(2,3);
	c1.display();
	c2.setData(3,4);
	c2.display();
	Complex c3= c1.add(c2);
	c3.display();
	return 0;
	
}
