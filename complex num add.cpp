#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex()
		{
			
		}
	
	complex(int r,int i  )
	{
		this->real=r;
		this->img=i ;
	}
	void display()
	{
		cout<<real<<"+"<<img<<"i"<<endl;
	}
	complex add(complex &a,complex &b,int num)
	{
		complex tem;
		tem.real= a.real+b.real+num;
		tem.img= a.img+b.img+num;
		return tem;
	}
	
};

int main()
{
	int num=5;
	complex c1(1,2);
	c1.display();
	complex c2(3,4);
	c2.display();
	complex c3;
	c3=c3.add(c1,c2,num);
	c3.display();
}
