#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<x<<ends<<y<<endl;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"after swap"<<ends<<x<<ends<<y;
}
