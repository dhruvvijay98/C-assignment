#include<iostream>
using namespace std;
class A
{
	int real,img;
	public:
		A(){
			real=0;
			img=0;
		}
		A(int r, int i)
		{
			this->real=r;
			img=i;
		}
		void display()
		{
			if(img>0)
			cout<<real<<"+"<<img<<"i"<<endl;
			else
			cout<<real<<img<<"i"<<endl;
		}
		A operator+(A& a)
		{
			A temp;
			temp.real=real+a.real;
			temp.img=this->img+a.img;
			return temp;
		}
	


};
int main()
{
	A a1(3,4);
	a1.display();
	A a2(4,5);
	a2.display();
	A a3;
	a3=a1+a2;//a3=a1.operator+(a2)
	a3.display();
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

