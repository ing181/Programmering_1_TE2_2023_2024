#include <iostream>
//#include <stdio.h>
using namespace std;
// Felkontroll
// M�ste vara en siffra!
int main()
{
    system("chcp 1252");
    // char array
    int tal;
    float talf;
    char in[100];
    cout << "Skriv in ett tal, Decimaltal eller heltal :>" << endl;
    cin >> in;
    // Kollar om f�rsta tecknet �r en siffra
    if (!isdigit(in[0])){

        cout << "Du f�r bara mata in siffror" << endl;

    }
    else {
        cout << "Du matade in " << in << endl;
        // Till heltal
        tal = atoi(in);
        // Till decimaltal
        talf = atoi(in);
        cout << (tal/2) << endl;
        cout << (talf/2) << endl;
    }


    return 0;
}
