#include<iostream>
using namespace std;

int main()
{
	int i,sum_e=0,sum_o=0;
	
	for(i=0;i<=20;i++)
	{
		if(i%2==0)
		{
			sum_e = sum_e + i;
			
		}
		
		
		if(i%2!=0)
		{
			sum_o = sum_o + i;
			}	
		
	}
	cout<<"Sum  is: "<<sum_e<<"\t"<<sum_o<<endl;
}
