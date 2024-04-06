#include<iostream>

using namespace std;
class String
{
	char n[]="hello";
	char m[]="hello";
	String(char name1,char name2)
	{
		n[]=name1;
		m[6]=name2;
	}
	void display()
	{
		cout<<"strings are equal"<<endl;
	}
	friend bool operator==(String& ,String& );
};
bool operator==(String& n,String& m)
{
	if(n==m)
	return 1;
}
int main()
{
	String s1("hello");
	String s2("hello");
	operator==(s1,s2);
}


char *ptr=new char[size];
