#include<iostream>
using namespace std;
class swap1
{
	int a;
	public:
		swap1(int a)
		{
			this->a=a;
			
		}
		friend void Swap(swap1&, swap1&);
};
void Swap(swap1& s1,swap1& s2)
{
	int temp;
	cout<<"before swap\n"<<s1.a<<s2.a<<endl;
	temp=s1.a;
	s1.a=s2.a;
	s2.a=temp;
	cout<<"after swap\n"<<s1.a<<s2.a<<endl;
	
}
int main()
{
	swap1 s1(2);
	swap1 s2(3);
	Swap(s1,s2);
}
