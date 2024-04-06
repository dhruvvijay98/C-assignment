#include<iostream>
using namespace std;
class student
{
	
	public:
		student()
		{
			cout<<"constructor is called\n";
		
		}
		void write()
		{
			cout<<"write"<<endl;
		}
		
};
int main()
{
	student * s=new student[3];
	for(int i=0;i<3;i++)
	{
		s[i].write();
	}
}
