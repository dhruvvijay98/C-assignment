#include<iostream>
using namespace std;
int main()
{
	int r,m=76,rev_n=0;
	cout<<m<<endl;
		while(m>0)
		{
			r=m%10;
			rev_n=rev_n*10+r;
			m=m/10;
		}
		
		cout<<rev_n<<endl;
	
}
