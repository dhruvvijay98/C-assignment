#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex()
		{
			real=0;
			img=0;
		}
		complex(int r, int i)
		{
			real=r;
			img=i;
			
		}
		void display()
		{
			if(img>0)
			cout<<real<<"+"<<img<<"i"<<endl;
			else
			cout<<real<<img<<"i"<<endl;
		}
		complex operator+(complex& c)
		{
			complex temp;
			temp.real= this->real+ c.real;
			temp.img=this->img+ c.img;
			return temp;
		}
};
int main()
{
	complex c1(1,2);
	c1.display();
	complex c2(3,-4);
	c2.display();
	complex c3=c1+c2;
	c3.display();
}
