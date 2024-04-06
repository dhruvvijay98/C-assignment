#include<iostream>
using namespace std;

class Test
{
	static int count1;
	static int count2;
	
	public:
		Test()
		{
			cout<<this<<endl;
			cout<<"Constructor is called"<<endl;
			count1++;
			
		}
		
		~Test()
		{
		
			cout<<"Destructor is called"<<++count2<<endl;
				cout<<this<<endl;
			
		}
		
		static int getcnt1()
		{
			return count1;
		}
		
		static int getcnt2()
		{
			return count2;
		}
	
};

int Test::count1;
int Test::count2;

int main()
{
	Test t;
	
	cout<<&t<<endl;
	Test t1;
	cout<<&t1<<endl;
	
	cout<<"No of constructors called: "<<Test::getcnt1()<<endl;

	
}
