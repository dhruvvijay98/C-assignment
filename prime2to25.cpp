#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=2;i<=25;i++)
	{
		
		int x=2;
		while(i!=0)
		{
			if(i%x==0)
			break;
			x++;	
		}
		if(i==x)
		cout<<i<<ends<<"is prime"<<endl;
	}
}
