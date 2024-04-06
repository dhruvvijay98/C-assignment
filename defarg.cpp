#include<iostream>
using namespace std;
void display (char = '*',int = 20);
int main()
{
	cout<<"no argument passed "<<endl;
	display();
	cout<<"argument passed "<<endl;
	display('#');
	cout<<"arguments passed "<<endl;
	display('&',30);
}
void display(char c,int i)
{
	for(int j=0;j<=i;j++)
	{
			cout<<c<<j;
	}

}
