#include <iostream>
//#include <stdio.h>
using namespace std;
// Felkontroll
// Måste vara en siffra!
int main()
{
    system("chcp 1252");
    // char array
    int tal;
    float talf;
    char in[100];
    cout << "Skriv in ett tal, Decimaltal eller heltal :>" << endl;
    cin >> in;
    // Kollar om första tecknet är en siffra
    if (!isdigit(in[0])){

        cout << "Du får bara mata in siffror" << endl;

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
