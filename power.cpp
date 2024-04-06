#include<iostream>
using namespace std;
int main()
{
	int base,exp,i,pow=1;
	cout<<"enter base"<<endl;
	cin>>base;
	cout<<"enter exp"<<endl;
	cin>>exp;
	for(i=1;i<=exp;i++)
	{
		pow= pow*base;
	}  
	cout<<"value is "<<pow<<endl;
}
