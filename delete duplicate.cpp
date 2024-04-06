#include<iostream>
using namespace std;

int main()
{
	int A[10],B[10],n,i,l,k=0;
	cout<<"enter no. of element"<<endl;
	cin>>n;
	cout<<"array elements"<<endl;
	for( i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for( i=0;i<n;i++)
	{
		for( l=0;l<k;l++)
		{
			if(A[i]==B[l])
			break;
		}
		if(l==k)
		{
			B[k]=A[i];
			k++;
		}
		
	}
	for(i=0;i<k;i++)
	cout<<B[i]<<endl;
}
