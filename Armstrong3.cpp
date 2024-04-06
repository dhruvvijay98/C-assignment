#include<iostream>
using namespace std;

int main()
{
	int i,j,rem,sum=0;
	
	for(i=0;i<=999;i++)
	{
		int sum=0;
		j=i;
		
		while(j>0)
		{
			rem = j%10;
			sum = sum + rem*rem*rem;
			
			j=j/10;
		}
		if(sum==i)
		{
			cout<<i<<ends<<"is an Armstrong No"<<endl;
		}
	}
	
	
}
