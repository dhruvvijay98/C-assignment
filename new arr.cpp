#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rollno;
	char name[20];
	public:
		student(int r,char * sptr)
		{
			rollno=r;
			strcpy(name,sptr);
		}
		void display()
		{
			cout<<"roll no. is : "<<rollno<<endl;
			cout<<"name is "<<name<<endl;
		}
};
int main()
{
	
	student * ptr= new student(1,"rahul");
	ptr->display();
}
