#include<iostream>
using namespace std;
int main()
{
	int r,n,m,rev_n;
	for(n=10;n<=30;n++)
	{
		rev_n=0;
		m=n;
		while(m>0)
		{
			r=m%10;
			rev_n=rev_n*10+r;
			m=m/10;
		}
		
		cout<<n<<"\t"<<rev_n<<endl;
	}
}
