#include <iostream>
using namespace std;
float pluss(float a, float b);
int main()
{
    float tal1;
    float tal2;
    cout << "Mata in tal 1 ";
    cin >> tal1;
    cout << "Mata in tal 2 ";
    cin >> tal2;
    float utvarde;
    utvarde = pluss(tal1,tal2);
    cout << tal1 << " + " << tal2 << " = " << utvarde << endl;

    return 0;
}
float pluss(float a, float b)
{
    float summa = a+b;
    return summa;
}
