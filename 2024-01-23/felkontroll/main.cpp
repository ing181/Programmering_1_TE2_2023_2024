#include <iostream>
using namespace std;
// Tips: Som Dutt
int main()
{
    float f;
    cin >> f;
    // Om inmatningen misslyckas
    // Till exempel genom att man
    // matar in fel datatyp
    // EX: inmatning av j ger ett felmeddelande
    if(cin.fail())
    {
        cout << "Var v�nlig och ange ett godtyckligt tal.";
    }
    return 0;
}
