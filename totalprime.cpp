#include<iostream>
using namespace std;
int main()
{
	int i;
	int count=0;
	for(i=2;i<=100;i++)
	{
		
		int x=2;
		while(i!=0)
		{
			if(i%x==0)
			break;
			x++;	
		}
		if(i==x)
		{
			cout<<i<<endl;
				count++;
		}
	
	
	}
		cout<<endl<<"Total no of prime nos between 0 to 100 are: "<<count;
}
