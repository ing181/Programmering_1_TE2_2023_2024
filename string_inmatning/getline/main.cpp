#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("chcp 1252");
    string namn;
    int age;
      cout << "Skriv in din �lder ";
      cin >> age;
      cout << "Du �r " << age << " gammal" << endl;

      cout << "Skriv in ditt namn ";

    // Bryter efter f�rsta blanka tecken
   // cin >> namn;
   // cout << "Ditt namn �r " << namn << endl;

    // letar i tangentbordsbufferten 256 tecken efter nyradstecknet
    // och tar bort det
    cin.ignore(256,'\n');

   // Bryter efter nyradstecken
   getline(cin,namn);
   cout << namn << endl;




    return 0;
}

