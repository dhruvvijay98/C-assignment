#include<iostream>
using namespace std;
static int count;
class test
{
	public:
	test()
	{
		
		cout<<"constructor is called"<<endl;
		count++;
		cout<<count<<endl;
	}
	~test()
	{
		
		cout<<"destructor is called"<<endl;
		count--;
		cout<<count<<endl;
	}
	
};
int main()
{
	test t1,t2,t3;
}
