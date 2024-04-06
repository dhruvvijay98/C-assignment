#include<iostream>
using namespace std;
class Employee
{
	int id;
	public:
		Employee()
		{
			cout<<"in default of emp"<<endl;
			id=0;
		}
		Employee(int i)
		{
			cout<<"int para of emp"<<endl;
			id=i;
		}
		void display()
		{
			cout<<id<<endl;
		}
		int findsal()
		{
			return 0;
		}
};
class WageEmployee: public Employee
{
	int hrs,rate;
	public:
		WageEmployee()
		{
			cout<<"int def of WE"<<endl;
			hrs=0;
			rate=0;
		}
		WageEmployee(int i,int h,int r):Employee(i)
		{
			cout<<"int para of WE"<<endl;
			hrs=h;
			rate=r;
		}
		void display()
		{
			cout<<hrs<<"\t"<<rate<<endl;
		}
		int findsal()
		{
			return hrs*rate;
		
		}
};
class Salesperson: public WageEmployee
{
	int sales,comm;
	public:
		Salesperson()
		{
			cout<<"in def of SP"<<endl;
			sales=0;
			comm=0;
		}
		Salesperson(int i,int h,int r,int s,int c):WageEmployee(i,h,r)
		{
			cout<<"int para of SP"<<endl;
			sales=s;
			comm=c;
		}
		void display()
		{
			cout<<sales<<"\t"<<comm<<endl;
		}
		int findsal()
		{
			return WageEmployee::findsal() + sales*comm;
		}
};

int main()
{
	WageEmployee we(1,2,3);
	we.display();
	int x=we.findsal();
	cout<<x<<endl;
	Salesperson sp(1,2,3,4000,5);
	sp.display();
	int y=sp.findsal();
	cout<<y<<endl;
}
