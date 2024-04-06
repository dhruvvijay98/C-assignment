#include<iostream>
using namespace std;

int main()
{
	int i,rem,sum=0,n,on;
	
	cout<<"Enter a number:"<<endl;
	cin>>n;
	on = n;
	while(n!=0)
	{
		rem = n%10;
		sum = sum + rem*rem*rem;
		n = n/10;

	}

	
	if(sum==on)
	{
		cout<<"This is Armstrong Num"<<endl;
		 
	}
	
	else
	{
		cout<<"This is not an Armstrong Num"<<endl;
	}
}

