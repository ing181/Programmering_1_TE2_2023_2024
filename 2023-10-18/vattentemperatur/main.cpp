#include <iostream>
using namespace std;
// Figur 4.3, sidan 43
int main()
{
    int temperatur;
    cout << "Mata in en temperatur ";
    cin >> temperatur;

    if (temperatur==100){
        cout << "Nu kokar vattnet" << endl;
    } else {
        if (temperatur==50) {
                cout << "Vattnet �r inte exakt exakt 100 grader" << endl;
            }
            else {
                cout << "Halvv�gs till 100!" << endl;
            }

    }
    return 0;
}
