#include<iostream>
using namespace std;

class MyDate
{
	int dd, mm, yy;
	
	public:
		void setDate(int d,int m,int y)
		{
			dd = d;
			mm = m;
			yy = y;
		}
		
		void display()
		{
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
	
		} 	
		
		void getDate(int d)
		{
			dd = d;
		}
		
		int getYear()
		{
			return yy;
			
		}
		
};

int main()
{
	MyDate d1;
	d1.setDate(18,3,24);
	
	d1.display();
	
	d1.getDate(19);
	d1.display();
	

	cout<<"The year is: "<<d1.getYear()<<endl;
	
	
	
}
