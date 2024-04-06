#include<iostream>
using namespace std;

template < class A, class Y>
A myMin(A x, Y y)
{
	return (x<y) ? x : y;
}

int main()
{
	cout<<myMin('a','b')<<endl;
	
	cout<<myMin(5,'j')<<endl;
	
	cout<<myMin(6.2,5.2)<<endl;
}
