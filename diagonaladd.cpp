#include<iostream>
using namespace std;

int main()
{
	int row,col,sum=0,num=1;
	
	for(row=1;row<4;row++)
	{
		for(col=1;col<4;col++)
		{
			if(row==col)
			{
				sum=sum+num;
			}
			cout<<num;
			num++;
		
		}
		cout<<"\n";
	}
		cout<<endl<<sum;
}
