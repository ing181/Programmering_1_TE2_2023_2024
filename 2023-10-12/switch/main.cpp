#include <iostream>

using namespace std;

int main()
{
    cout << "Ange ett nummer ";
    int nr;
    cin >> nr;

    switch(nr) {
    case 1:
    cout << "case 1" << endl;
    // H�r kan du l�gga till
    // vad du vill ska intr�ffa
    // om anv�ndaren v�ljer
    // heltalet 1
    break;
    case 2:
    cout << "case 2" << endl;
    break;
    // default �r friviligt att
    // ha med.
    default:
    cout << "default case" << endl;
    }





    return 0;
}
