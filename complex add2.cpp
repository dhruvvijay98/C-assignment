#include<iostream>
using namespace std;

class Complex1
{
	int real,img;
	
	public:
		Complex1()
		{
			
		}
		Complex1(int r,int i)
		{
			real=r;
			img=i;
			
		}
		
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		
		Complex1 add(Complex1 &A,Complex1 &B)
		{
			Complex1 temp;
			temp.real = A.real + B.real ;
			temp.img = A.img + B.img ;
			
			return temp;
		}
	
};
int main()
{
	Complex1 C1(4,5);
	C1.display();
	Complex1 C2(5,6);
	C2.display();
	Complex1 C3 =C3.add(C1,C2);
	C3.display();	
}
