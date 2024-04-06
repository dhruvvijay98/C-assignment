#include<iostream>
using namespace std;
int main()
{
	int num,i=2;
	cout<<"enter num"<<endl;
	cin>>num;
	while(num!=0)
	{
		if(num%i==0)
		break;
		i++;
	}
	if(num==i)
	cout<<"num is prime"<<endl;
	else
	cout<<"not prime"<<endl;
}
