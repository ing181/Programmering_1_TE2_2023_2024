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
    // postfix, ökar värdet med 1
    temp++;
    cout << "Temperaturen är nu " << temp << endl;
    }
    cout << "Nu kokar vattnet";
    */

    // Om prefix och postfix
    // prefix=före
    // post=efter

    int i=0;
    int j=0;

    //postfix
    cout << i++ << endl; // Skriver ut 0

    // prefix
    cout << ++j << endl; // Skriver ut 1

    // postfix tilldelar föst, skriver ut eller tilldelar någon annan
    // variabel efter ökningen

    // prefix skriver ut eller tilldelar någon annan
    // variabel först, efter detta ökas variabeln med 1


    return 0;
}
