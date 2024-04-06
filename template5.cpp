#include <iostream>  
using namespace std;  
template<class T>  
class A   
{  
    public:  
    T num1 ;  
    T num2 ;  
    void add(T num1,T num2)  
    {  
        std::cout << "Addition of num1 and num2 : " << num1+num2<<std::endl;  
    }  
      
};  
  
int main()  
{  
    A<int> d;  
    d.add(5,5);  
    return 0;  
}  
