#include <iostream>
using namespace std;
// Funktionsdeklaration
// Deklarerar (talar om
// namn, eventuella in- och utv�rdens
// datatyp

void namn();
int main()
{
    namn();
    cout << "HEJ" << endl;
    namn();
    cout << "HEJ" << endl;
    namn();
    cout << "HEJ" << endl;
    namn();

    return 0;
}
// Funktionsdefinition
// Vad funktionen g�r
void namn()
{
    // "return" g�r s� att
    // funktionen avsluutas
    // och programk�rningen
    // forts�tter i main
    // return;
     cout << "Hello world!" << endl;

}
