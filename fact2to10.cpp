#include<iostream>
using namespace std;
int main()
{
	int x,i;
		
	for(i=2;i<=10;i++)
	{
		int fact=1;
		  
		for(x=1;x<=i;x++)
		{
				fact=fact*x;
		}
           cout<<"factorial of"<<ends<<i<<ends<<"is"<<ends<<fact<<endl;
	}
		 
}
