#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("chcp 1252");
    string namn;
    // Inmatning med "cin" fortsätter
    // till första blanktecknet.
    // till exempel mellanslag
    // cin >> namn;

    // inmatning med getline fortsättr
    // till första nyradsteckan

      cout << "mata in din ålder (heltal)" << endl;
      int age;
      cin >> age;
      cout << endl;
      cout << age;
      cout << endl;

      // funkar inte, inmatningen avbryts direkt
      // kvar i tangentbordsbufferten
      // ligger \n efter att du matat in
      // heltalet.

      // lösning
      cin.ignore(256,'\n');
      // denna funktion söker i tangentbordsbufferten
      // och tar bort eventuella nyradstecken.


      cout << "mata in ditt namn" << endl;
      getline(cin,namn);

      cout << namn;


    //cout << "hej" << endl << "dig" << endl;
    // med nyradstecken
    // "\" kallas Escape tecken
    // Och ger efterföljande tecken en
    // speciell betydelse
    // cout << "hej\ndig\n\\\\";






    return 0;
}

