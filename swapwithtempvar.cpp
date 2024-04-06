#include<iostream>
using namespace std;
int main()
{
	int x,y,temp;
	cin>>x>>y;
	cout<<"befor swap"<<ends<<x<<ends<<y<<endl;
	temp=x;
	x=y;
	y=temp;
	cout<<"after swap"<<ends<<x<<ends<<y<<endl;
}
