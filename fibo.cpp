#include<iostream>
using namespace std;
int main()
{
int a=0,b=1,c,i,j;
cout<<a<<b<<endl;
cout<<"enter j"<<endl;
cin>>j;
for(i=3;i<=j;i++)
{
	c=a+b;
	cout<<"series is "<<c<<endl;
	a=b;
	b=c;
}


}
