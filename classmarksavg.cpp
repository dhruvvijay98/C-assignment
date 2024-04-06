#include<iostream>
using namespace std;
int main()
{
	int n,m,sum=0;
	float avg;
	cout<<"enter no of subjects\n";
	cin>>n;
	cout<<"enter no. of characters\n";
	cin>>m;
	
	int * ptr_marks = new int[n];
	char * p_name = new char[m];
		cout<<"give marks\n";
	for(int i=0;i<n;i++)
	{
		cin>>ptr_marks[i];
	}
	for(int i=0;i<n;i++)
	
	{
		sum=sum+ptr_marks[i];
	}
	cout<<"enter name\n";
	cin>>p_name;	
	cout<<"name is\n"<<p_name;
	avg=(float)sum/n;
	cout<<"avg is "<<avg;
	delete [] p_name;
	delete[] ptr_marks;
	
	return 0;
	
}
