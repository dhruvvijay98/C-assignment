#include<iostream>
using namespace std;

template <class T>
T add(T &a, T &b)
{
	T Result = a+b;
	return Result;
}

int main()
{
	int i = 5;
	int j = 6;
	double m= 3.33;
	double n= 4.44;
	
	cout<<"Addition is: "<<add(i,j)<<endl;
	cout<<"Addition is: "<<add(m,n)<<endl;
	
}
