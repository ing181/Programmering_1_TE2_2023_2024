#include <iostream>

using namespace std;

int main()
{
    // 4294967295
/*
    int unsigned heltal = 4294967295;
    cout << "char " << sizeof(char)<< endl;
    cout << "int " << sizeof(int)<< endl;
    cout << "float " << sizeof(float)<< endl;
    cout << "bool " << sizeof(bool)<< endl;
    cout << heltal << endl;
*/
    // siffran 1 betyder true
    // siffran 0 betyder false
    bool test = (2<3);
   // cout << (2<3)<< endl;
   // cout << test << endl;

    if (test) {
       cout << "SANT" << endl;
    }
    else {
        cout << "FALSKT" << endl;
    }


    return 0;
}
