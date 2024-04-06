#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter the size"<<endl;
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter the elements: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	
	}
		for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	
	}
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
}
