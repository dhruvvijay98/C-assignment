#include <iostream>
using namespace std;
class Demo {
    int value;
 
public:
    Demo(int v = 0) { value = v; }
    void showMessage()
    {
        cout << "Hello World  Inside showMessage() Function";
    }
     
    void display() const
    {
        cout << "Hello world ";
    }
};
int main()
{
    
    const Demo d1;
   
    d1.display();

}
