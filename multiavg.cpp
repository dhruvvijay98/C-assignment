#include<iostream>
using namespace std;

int main()
{
	int j,m,n,rn,sum=0;
	float avg;
	
	cout<<"Enter no of students \n";
	cin>>j;
	
	
	for(int a=1;a<=j;a++)
{
		cout<<"\n Enter student roll no.: \n";
	cin>>rn;
			cout<<"Enter total subjects: \n";
	      cin>>m;
	
	int * tot_marks = new int [m];
	char * name = new char [n]; 
	
	cout<<"Enter marks\n ";
	
	for(int i=0;i<m;i++)
	{
		cin>>tot_marks[i];
	}
	
    for(int i=0;i<m;i++)
	{
		sum = sum+tot_marks[i];
	}
	cout<<"Enter name \n";
	cin>>name;
	
	cout<<"Avg is:  \n";
	avg = (float)sum/m;
	cout<<avg;
}
}

