#include <iostream>

using namespace std;

int main()
{
    int i = 3;
    // Pekare till i
    // p = adressen till i
    int *p;
    p = &i;
    *p = 77;


    cout << p << endl;


     cout << i << endl;
    // Det som p pekar p�, vad som finns p� adressen
    cout << *p << endl;
    return 0;
}
