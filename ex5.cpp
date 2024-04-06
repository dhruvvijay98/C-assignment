#include<iostream>
using namespace std;
class MyDate
{
		int dd,mm,yy;
	public:
		MyDate();
		void display() const;
};
MyDate::MyDate()
{
	dd=1;
	mm=2;
	yy=23;
}
void MyDate::display() const
{
	cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
int main()
{
	MyDate d;
	d.display();
}

