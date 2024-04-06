#include <iostream>  
using namespace std;
template<class T, class U = char>   
  class A 
{ 
public: 
    T x; 
    U y;
	void add()
	{
		cin>>x>>y;
		cout<<x+y<<endl;
	 } 
}; 
  
int main() 
{ 
    A<int> a;
	a.add(); 
    A<int, int> b; 
   b.add(); 
    return 0; 
} 
