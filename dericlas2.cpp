#include <iostream>
using namespace std;
class Parent 
{
    public:
    int id_p;
    
    void display()
    {
        
	}
};

class Child : public Parent 
{
public:
    int id_c;
    void display()
    {
        
	}
 
};

 int main()
{
    Parent obj1;
    obj1.id_p = 91;
   //cout << "Child id is: " << obj1.id_c << '\n';//error
	cout<< "Parent id is: " << obj1.id_p << '\n';
    cout<<sizeof(obj1);
 	obj1.display();
}
 

