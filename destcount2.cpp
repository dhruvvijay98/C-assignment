#include<iostream>
#include<string.h>
using namespace std;
class String
{
	public:
		char* s;
		int size;
		
		public:
			String(char*);
			~String();	
};

String::String(char* c)
{
	size= strlen(c);
	s=new char[size+1];
	strcpy(s,c);
}
String::~String()
{
	cout<<"destructor called"<<endl;
 delete [] s;
	cout<<s;
	
}
int main()
{
	String str("hello, World!");
}
