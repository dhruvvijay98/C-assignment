#include<iostream>
using namespace std;
void swap(int&, int&);
int main()
{
	int a=8,b=9;
	cout<<"value of a & b is "<<a<<b<<endl;
	swap(a,b);
      cout<<"value of a & b is "<<a<<b<<endl;
	
}
void swap(int &p,int &q)
{
	int i;
	i = p;
	p=q;
	q=i;
	cout<<"value of p & q is "<<p<<q<<endl;
}

