#include<iostream>
using namespace std;
void swap(int*, int*);
int main()
{
	int a,b;
	cout<<"enter values"<<endl;
	cin>>a>>b;
	cout<<"value of a and b is"<<a<<b<<endl;
	swap(&a,&b);
	cout<<"swap value of a and b is"<<a<<b<<endl;
}
void swap(int*p,int*q)
{
	int i;
	i=*p;
	*p=*q;
	*q=i;
	cout<<"value of p and q is"<<*p<<*q<<endl;
}
