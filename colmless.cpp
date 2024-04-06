#include<iostream>
using namespace std;

int main()
{
	int row,col,num=1;
	
	for(row=1;row<4;row++)
	{
		for(col=1;col<4;col++)
		{
			
		
			if(col==2)
				cout<<" "<<"\t";
			else		
 				cout<<num;
 				
 				num++;
			
				
		}
		cout<<"\n";
	}
}
