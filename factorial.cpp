#include<iostream>
using namespace std;

int main()
{
	int fact = 1;
	int i,j;
	
	cout<<"Enter the value"<<endl;
	cin>>i;
	
	for(j=1;j<=i;j++)
	{
		fact = fact * j;
	}
	
	cout<<"Factorial is:"<<fact<<endl;
}
