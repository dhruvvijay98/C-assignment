#include<iostream>
using namespace std;

int main()
{
	int row,col;
	
	for(row=1;row<=4;row++)
	{
		for(col=1;col<=4;col++)
		{
			if(row+col<=4)
			{
				cout<<" ";
			}
			else
			cout<<"*";
		
		}
		cout<<"\n";
	}
	
}
