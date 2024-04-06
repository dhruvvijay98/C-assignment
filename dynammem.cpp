#include<iostream>
#include<cstring>
using namespace std;

class Student
{
	int roll_no;
	char name[20];
	
	public:
	void display();
	Student(int,char *);	
};

Student::Student(int i,char * sptr)
	{
		roll_no = i;
		strcpy(name,sptr);	
	}
			
void Student::display()
	{
		cout<<"Name is: "<<name<<"\nRoll no is: "<<roll_no;
	}

int main()
{
	Student * ptr = new Student(1,"xyz");
	ptr->display();
	
}
