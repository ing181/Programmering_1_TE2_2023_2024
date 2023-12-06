#include <iostream>

using namespace std;

int main()
{
    // Om variablers scope
    int i = 2;
    if (i==2){
        int i;
        cout << i << endl;
    }

    cout << i << endl;

    // Logiska variabler

    // && och
    // || eller
    // !  inte

    if ( ( (4==5) && (6!=3) ) || (7>4) ) {
        cout << "Sant" << endl;
    }
    else {
        cout << "Falskt" << endl;
    }

    return 0;
}
