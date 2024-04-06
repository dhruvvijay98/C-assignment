#include <iostream>
using namespace std;
 
void add(int a, int b)
{
  cout << "sum = " << (a + b);
}

 void add(char a, char b)
{
    cout << endl << "sum = " << (a + b);
}

int main()
{
    add(10, 2);
    add(5.3f, 6.2f);
 }
