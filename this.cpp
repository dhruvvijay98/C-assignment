#include<iostream>
using namespace std;
class Test
{
	int a,b;
	public:
		void show(int a,int b)
		{
			this->a=a;
			(*this).b=b;
		}
		void display()
		{
			cout<<this->a<<" "<<(*this).b<<endl;
		}
};
int main()
{
	Test t;
	t.show(20,30);
	t.display();
}
