#include<iostream>
using namespace std;
class Date
{
	int dd,mm,yy;
	public:
		Date(int d,int m, int y)
		{
			dd=d;
			mm=m;
			yy=y;
		}
		void show()
		{
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
		Date(Date& d1)
		{
			dd=d1.dd;
			mm=d1.mm;
			yy=d1.yy;
		}
		
};
int main()
{
	Date d(27,03,24);
	d.show();
	Date d1(d);
	d1.show();
}
