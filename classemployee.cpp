#include<iostream>
using namespace std;

class Employee
{
	int id;
	float sal;
	
	public:
		void MyEmployee(int i, float f)
		{
			 id = i;
			 sal = f;
			 
		}
		
		void display()
		{
			cout<<"Employee ID and Salary is: "<<id<<"\t"<<sal<<endl;
		}
		void setId(int a)
		{
			id=a;
		}
		float getSal()
		{
		
			return sal;
		}
		
};

int main()
{
	Employee E1;
	E1.MyEmployee(3, 234.12);
	E1.display();
	E1.setId(5);
	E1.display();
	cout<<"the salary is : "<<E1.getSal()<<endl;
}
