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
    // Här kan du lägga till
    // vad du vill ska inträffa
    // om användaren väljer
    // heltalet 1
    break;
    case 2:
    cout << "case 2" << endl;
    break;
    // default är friviligt att
    // ha med.
    default:
    cout << "default case" << endl;
    }





    return 0;
}
