#include <iostream>

using namespace std;

int main()
{   // FEL I BOKEN
    // Sidan 50, Exempel 5.1
    /*
    system("chcp 1252");
    cout << "Ange temperaturen";
    int temp;
    cin >> temp;
    while (temp < 100){
    // postfix, �kar v�rdet med 1
    temp++;
    cout << "Temperaturen �r nu " << temp << endl;
    }
    cout << "Nu kokar vattnet";
    */

    // Om prefix och postfix
    // prefix=f�re
    // post=efter

    int i=0;
    int j=0;

    //postfix
    cout << i++ << endl; // Skriver ut 0

    // prefix
    cout << ++j << endl; // Skriver ut 1

    // postfix tilldelar f�st, skriver ut eller tilldelar n�gon annan
    // variabel efter �kningen

    // prefix skriver ut eller tilldelar n�gon annan
    // variabel f�rst, efter detta �kas variabeln med 1


    return 0;
}
