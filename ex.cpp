#include <iostream>
using namespace std;
 
class Test 
{
	int value;
 public:
    Test(int v)
    {
    	value = v;
	}
    

     int getValue() const
     {
     	return value; 

	 }
};
 
int main()
{
    Test t(20);
    cout << t.getValue();
    return 0;
}
