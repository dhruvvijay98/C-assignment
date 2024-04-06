#include<iostream>
using namespace std;
class swap1
{
	int i,j,temp;
	public:
		swap1(int a,int b)
		{
			i=a;
			j=b;
		}
		friend void Swap(swap1&);
};
void Swap(swap1& s)
{
	cout<<s.i<<s.j<<endl;
	s.temp=s.i;
	s.i=s.j;
	s.j=s.temp;
	cout<<s.i<<s.j<<endl;
}
int main()
{
	swap1 s(2,3);
	Swap(s);
}
