#include<iostream>
using namespace std;

template <class T>
T swap1(T &a,T &b)
{
	T r;
	r=a;
	a=b;
    b=r;
	
}
int main()
{
	int x=2,y=3;
	float m=5.2f;
	float n=4.3f;
	swap1(x,y);
	cout<<"after swap: "<<x<<y<<endl;
	cout<<"after swap "<<swap1(m,n)<<m<<endl<<n<<endl;
}
