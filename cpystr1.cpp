#include<iostream>
#include<string.h>
using namespace std;
class string1
{
	int len;
	char*ptr;
	public:
	string1(char*a)
	{
		len=strlen(a);
		ptr=new char [len+1];
		strcpy(ptr,a);
	}
	void display()
	{
		cout<<"length is "<<len<<endl;
		cout<<"string is  "<<ptr<<endl;
	}
	string1(string1 & c)
	{
		this->len=c.len;
		this->ptr=c.ptr;
		strcpy(this->ptr,c.ptr);
	}
	~string1()
	{
		cout<<"destructor called"<<endl;
		delete [] ptr;
	}
};
int main()
{
	string1 c1("rahul");
	c1.display();
	string1 c2(c1);
	c2.display();
}
