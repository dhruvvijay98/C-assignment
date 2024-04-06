#include <iostream>
using namespace std;
class Parent 
{
public:
    int id_p;
    void set_display1()
   {
            cout<<"hello"<<endl;;
   }
protected:
int id_pro;
 
};
class Child : public Parent 
{
   public:
    int id_c;
   void set_display()
    {
            id_pro=10;
            cout<<id_pro<<endl;
    }
};
 int main()
{
    Child obj1;
  
    obj1.id_c = 7;
        obj1.id_p = 91;
  
    cout << "Child id is: " << obj1.id_c << '\n';
    cout << "Parent id is: " << obj1.id_p << '\n';
    obj1.set_display1();
    obj1.set_display();
    cout<<sizeof(obj1);
}



