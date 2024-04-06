#include<iostream>
using namespace std;
int main()
{
	int n,m,r,sum=0;
	for(n=0;n<=999;n++)
	{
		sum=0;
		m=n;
		while(m!=0)
		{
			r=m%10;
			sum=sum+r*r*r;
			m=m/10;
		}
		if(sum==n)
		cout<<"no.of armstrong numbers are : "<<n<<endl;
	}
}
