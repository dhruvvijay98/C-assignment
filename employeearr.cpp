#include<iostream>
using namespace std;

class Employee
{
	char name[30];
	int id;
	
	public:
		void getdata();
		void putdata();
};

void Employee::getdata()
{
	int id;
	cout<<"Enter ID:"<<endl;
	cin>>id;
	cout<<"Enter your name:"<<endl;
	cin>>name;
}

void Employee::putdata()
{
	cout<<id<<endl;
	cout<<name<<endl;
	cout<<endl;
}

int main()
{
	Employee emp[30];
	int i,n;
	
	cout<<"Enter number of employees:";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		emp[i].getdata();
	}
	
	for(i=0;i<n;i++)
	{
		emp[i].putdata();
	}
}
