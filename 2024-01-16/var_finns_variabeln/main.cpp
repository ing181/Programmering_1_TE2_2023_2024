#include <iostream>

using namespace std;

float berakna(float a);
int main()
{
   float a = 2.1;
   float b = berakna(a);
   cout << b << endl;
   cout << "I huvudprogrammet " << a << endl;
    return 0;
}
float berakna(float x)
{
    x = (x + 2);
    cout << "I funktionen " << x << endl;
    return x;
}
