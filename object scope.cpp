#include<iostream>
using namespace std;
class Test
{
	public:
		Test()
		{
			cout<<"constr incoked"<<endl;
		}
		~Test()
		{
			cout<<"destr invoked"<<endl;
		}
};

int main()
{
	cout<<"main begins"<<endl;
	Test t1;
	cout<<"block end"<<endl;
	
}
