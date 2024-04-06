#include<iostream>
using namespace std;

class Complex
{
	int real,img;
	
	public:
		Complex()
		{
			real = 0;
			img = 0;
		}
		
		Complex(int r,int i)
		{
			real = r;
			img = i;
		
		}
	
		
			friend void operator<<(ostream &out, Complex &c);
			friend void operator>>(istream &in, Complex &c);
};
	
		void operator<< (ostream &out, Complex &c)
		{
			out<<c.real;
			out<<"+"<<c.img<<"i"<<endl;
		}
		
		void operator>> (istream &in, Complex &c)
		{
			cout<<"Enter real part"<<endl;
			in>>c.real;
			
			cout<<"Enter img part"<<endl;
			in>>c.img;
		}
		
		
int main()
{
	Complex C1;
	cin >> C1;
	cout<<"The complex object is:"<<endl;
	cout<<C1;
	return 0;
	
}
